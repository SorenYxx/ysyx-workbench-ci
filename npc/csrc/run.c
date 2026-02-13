#include <npc.h>
#include <common.h>
#include <sdb.h>

//ebreak
int is_end = 0;

//verilator
VerilatedFstC* tfp = new VerilatedFstC;
Vminirv* top = new Vminirv;
vluint64_t main_time = 0;

//state
NPCState npc_state = { .state = NPC_STOP };
CPU_state cpu_n = { .pc = 0x80000000 };

void is_illegal_inst() {
  npc_state.state = NPC_ABORT; 
  npc_state.halt_pc = top->cur_pc;
  Log("\033[1;31mAbort at PC = 0x%08x Inst = 0x%08x\033[0m", top->cur_pc, top->cur_inst);
}

int is_exit_status_bad() {
  int good = (npc_state.state == NPC_END && R[0] == 0) || (npc_state.state == NPC_QUIT);
  return !good;
}

void ebreak() {
  if (R[10] == 0) { is_end = 1; npc_state.halt_pc = top->cur_pc; Log("\033[1;32mHIT GOOD TRAP\033[0m"); }
  else {
    Log("\033[1;31mHIT BAD TRAP\033[0m");
    exit(0);
  }
}


void step_and_eval() {
  cpu_n.pc = top->cur_pc;

  top->clk = 0; top->eval();
  top->clk = 1; top->eval();

  tfp->dump(main_time); 
  main_time ++;

  if (diff) check_difftest();
  check_watchpoints();
}

void cpu_exec(uint64_t n) {
  switch (npc_state.state) {
    case NPC_END: case NPC_ABORT: case NPC_QUIT:
    Log("Simulation already ended at 0x%08x.", npc_state.halt_pc);
    return;
    default: npc_state.state = NPC_RUNNING;
  }

  for (uint64_t i = 0; i < n; i ++) {
    step_and_eval();
    if (is_end) {
      npc_state.state = NPC_END;
      break;
    }
    if (g_enable_itrace) itrace_record(top->cur_pc, top->cur_inst);
    if (npc_state.state != NPC_RUNNING) break; 
  }
  if (npc_state.state == NPC_RUNNING) npc_state.state = NPC_STOP;
}

void sim_exit() {
  tfp->close();
  delete tfp;
  delete top;
}
