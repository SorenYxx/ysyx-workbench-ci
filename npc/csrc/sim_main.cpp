#include <npc.h>
#include <common.h>

int main(int argc, char *argv[]) {
  // parse_args(argc, argv);

  init_sdb();
  sim_init(argc, argv);

  sdb_mainloop();

  sim_exit();

  return is_exit_status_bad(); 
}
