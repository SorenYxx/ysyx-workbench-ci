#include <npc.h>
#include <common.h>
#include <sdb.h>
#include <getopt.h>

//ebreak
int is_end = 0;

//trace
bool g_enable_itrace = false;
bool g_enable_mtrace = false;
bool g_enable_ftrace = false;

//verilator
VerilatedFstC* tfp = new VerilatedFstC;
Vminirv* top = new Vminirv;
vluint64_t main_time = 0;

//state
NPCState npc_state = { .state = NPC_STOP };

void is_illegal_inst() {
  npc_state.state = NPC_ABORT; 
  npc_state.halt_pc = top->cur_pc;
  Log("NPC Abort at PC = 0x%08x Inst = 0x%08x", top->cur_pc, top->cur_inst);
}

int is_exit_status_bad() {
  int good = (npc_state.state == NPC_END && R[0] == 0) || (npc_state.state == NPC_QUIT);
  return !good;
}

void ebreak() {
  if (R[10] == 0) { is_end = 1; npc_state.halt_pc = top->cur_pc; Log("\033[1;32mHIT GOOD TRAP\033[0m"); }
  else {
    printf("\n\033[1;31mHIT BAD TRAP\033[0m\n\n");
    exit(0);
  }
}



/*static void trace_and_difftest(Decode *_this, vaddr_t dnpc) {
#ifdef CONFIG_ITRACE_COND
  if (ITRACE_COND) { log_write("%s\n", _this->logbuf); }
#endif
  if (g_print_step) { IFDEF(CONFIG_ITRACE, puts(_this->logbuf)); }
  IFDEF(CONFIG_DIFFTEST, difftest_step(_this->pc, dnpc));

  check_watchpoints();
}*/

void step_and_eval() {
  top->clk = 0; top->eval();
  top->clk = 1; top->eval();

  tfp->dump(main_time); 
  main_time ++;

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
    // if (g_enable_itrace) itrace_record(top->cur_pc, top->cur_inst);
    if (npc_state.state != NPC_RUNNING) break; 
  }
  if (npc_state.state == NPC_RUNNING) npc_state.state = NPC_STOP;
}

void sim_exit() {
  tfp->close();
  delete tfp;
  delete top;
}

// int parse_args(int argc, char *argv[]) {
//   const struct option table[] = {
//     {"itrace", no_argument, NULL, 'i'},
//     {"mtrace", no_argument, NULL, 'm'},
//     {"ftrace", no_argument, NULL, 'f'},
//     {0       , 0          , NULL,  0 },
//   };
//   int o;
//   while ((o = getopt_long(argc, argv, "-imf", table, NULL)) != -1) {
//     switch (o) {
//       case 'i': g_enable_itrace = true; break;
//       case 'm': g_enable_mtrace = true; break;
//       case 'f': g_enable_ftrace = true; break;
//       default: break;
//     }
//   }
//   return 0;  
// }
