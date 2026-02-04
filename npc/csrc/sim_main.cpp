#include <npc.h>
#include <common.h>

NPCState npc_state = { .state = NPC_STOP };
int is_end = 0;

VerilatedFstC* tfp = new VerilatedFstC;
Vminirv* top = new Vminirv;
vluint64_t main_time = 0;

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
