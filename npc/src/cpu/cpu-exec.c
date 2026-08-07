#include <npc.h>
#include <common.h>
#include <sdb.h>

// ebreak
void ebreak() {
  npc_state.halt_pc = CPU_PC();
  if (R[10] == 0) { 
    Log("\033[1;32mHIT GOOD TRAP\033[0m"); 
    npc_state.state = NPC_END;
  }
  else {
    Log("\033[1;31mHIT BAD TRAP\033[0m");
    npc_state.state = NPC_ABORT;
  }
}


// verilator
VerilatedFstC* tfp = new VerilatedFstC;
VysyxSoCFull* top = new VysyxSoCFull;
vluint64_t main_time = 0;


// state
NPCState npc_state = { .state = NPC_STOP };
CPU_state cpu_n = { .pc = 0x20000000 };

void is_illegal_inst() {
  Log("\033[1;31mAbort at PC = 0x%08x with illegal_inst = 0x%08x\033[0m", CPU_PC(), CPU_INST());
  npc_state.state = NPC_ABORT;
  npc_state.halt_pc = CPU_PC();
}

int is_exit_status_bad() {
  int good = (npc_state.state == NPC_END && R[10] == 0) || (npc_state.state == NPC_QUIT);
  return !good;
}


// eval
void step_and_eval() {
  top->clock = 0; top->eval();
  top->clock = 1; top->eval();

#ifdef CONFIG_WAVE_DUMP
  tfp->dump(main_time); 
#endif
  main_time ++;
  nvboard_update();

  cpu_n.pc = CPU_PC();

#ifdef CONFIG_DIFFTEST
  check_difftest();
#endif
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

#ifdef CONFIG_TRACE
    itrace_record(CPU_PC(), CPU_INST());
#endif
    if (npc_state.state == NPC_END || npc_state.state == NPC_ABORT) break; 
  }
  if (npc_state.state == NPC_RUNNING) npc_state.state = NPC_STOP;
}

void sim_exit() {
#ifdef CONFIG_WAVE_DUMP
  tfp->close();
  delete tfp;
#endif
  nvboard_quit();
  delete top;
}
