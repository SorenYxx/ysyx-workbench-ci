#include <npc.h>
#include <common.h>
#include <paddr.h>
#include <iostream>
#include <cstdio>
#include <cstdlib>

NPCState npc_state = { .state = NPC_STOP };
uint32_t R[31] = {};
int is_end = 0;

VerilatedFstC* tfp = new VerilatedFstC;
Vminirv* top = new Vminirv;
vluint64_t main_time = 0;

extern "C" void get_reg(int r) {
  for (int i = 0; i < 30; i ++) R[i] = r;
}

extern "C" void ebreak() {
  if (R[10] == 0) { is_end = 1; npc_state.halt_pc = top->cur_pc; Log("\033[1;32mHIT GOOD TRAP\033[0m"); }
  else {
    printf("\n\033[1;31mHIT BAD TRAP\033[0m\n\n");
    exit(0);
  }
}

extern "C" void is_illegal_inst() {
  npc_state.state = NPC_ABORT; 
  npc_state.halt_pc = top->cur_pc;
  Log("NPC Abort at PC = 0x%08x Inst = 0x%08x", top->cur_pc, top->cur_inst);
}



static int is_exit_status_bad() {
  int good = (npc_state.state == NPC_END && R[0] == 0) || (npc_state.state == NPC_QUIT);
  return !good;
}

static void step_and_eval() {
  top->clk = 0; top->eval();
  top->clk = 1; top->eval();

  tfp->dump(main_time);
  main_time ++;  
}

void cpu_exec(uint64_t n) {
  if (npc_state.state == NPC_END || npc_state.state == NPC_ABORT) {
    Log("Simulation already ended at 0x%08x.", npc_state.halt_pc);
    return;
  }

  npc_state.state = NPC_RUNNING;

  for (uint64_t i = 0; i < n; i ++) {
    step_and_eval();
    if (is_end) {
      npc_state.state = NPC_END;
      break;
    }
  }
  if (npc_state.state == NPC_RUNNING) npc_state.state = NPC_STOP;
}

static void sim_exit() {
  tfp->close();
  delete tfp;
  delete top;
}



int main(int argc, char *argv[]) {
  init_sdb();
  sim_init(argc, argv);

  sdb_mainloop();

  sim_exit();

  return is_exit_status_bad(); 
}
