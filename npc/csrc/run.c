#include <npc.h>
#include <common.h>
#include <sdb.h>

int is_exit_status_bad() {
  int good = (npc_state.state == NPC_END && R[0] == 0) || (npc_state.state == NPC_QUIT);
  return !good;
}

void step_and_eval() {
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


