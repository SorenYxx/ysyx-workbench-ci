#include <common.h>
#include <npc.h>
#include <paddr.h>

static void load_bin(const char *filename) {
  if (filename == NULL) return;
  FILE *fp = fopen(filename, "rb");

  if (fp == NULL) {
    perror("Error opening image file");
    printf("Path attemped: %s\n", filename);
  }

  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);
  fseek(fp, 0, SEEK_SET);
  uint32_t k = fread(guest_to_host(0x80000000), size, 1, fp);

  fclose(fp);
}

void sim_init(int argc, char *argv[]) {
  char *img_file = NULL;

  for (int i = 1; i < argc; i++) {
    if (strcmp(argv[i], "--img") == 0 && i + 1 < argc) img_file = argv[i + 1];
  }

  if (img_file != NULL) load_bin(img_file);
  else {
    printf("No image file\n");
    exit(1);
  }

  Verilated::commandArgs(argc, argv);
  Verilated::traceEverOn(true);

  top->trace(tfp, 99);
  tfp->open("wave.fst");

  top->rst = 1; top->clk = 0; 
  top->eval(); top->clk = 1;
  top->eval(); top->rst = 0;

  Log("Trace: %s", MUXDEF(CONFIG_TRACE, ANSI_FMT("ON", ANSI_FG_GREEN), ANSI_FMT("OFF", ANSI_FG_RED)));
  Log("Build time: %s, %s", __TIME__, __DATE__);
  printf("Welcome to %s-NPC!\n", ANSI_FMT(str(minirv), ANSI_FG_YELLOW ANSI_BG_RED));
  printf("For help, type \"help\"\n");
}
