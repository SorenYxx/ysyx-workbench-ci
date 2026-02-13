#include <common.h>
#include <npc.h>
#include <paddr.h>
#include <getopt.h>

//ftrace
static char *elf_file = NULL;

//difftest
static char *diff_so_file = NULL;
bool diff = false;

//trace
bool g_enable_itrace = false;
bool g_enable_mtrace = false;
bool g_enable_ftrace = false;

static int parse_args(int argc, char *argv[]) {
  const struct option table[] = {
    {"itrace", no_argument      , NULL, 'i'},
    {"mtrace", no_argument      , NULL, 'm'},
    {"ftrace", no_argument      , NULL, 'f'},
    {"diff"  , required_argument, NULL, 'd'},
    {"elf"   , required_argument, NULL, 'e'},
    {0       , 0                , NULL,  0 },
  };
  int o;
  while ((o = getopt_long(argc, argv, "-dimf", table, NULL)) != -1) {
    switch (o) {
      case 'i': g_enable_itrace = true; break;
      case 'm': g_enable_mtrace = true; break;
      case 'f': g_enable_ftrace = true; break;
      case 'd': diff_so_file = optarg; if (diff_so_file) diff = true; break;
      case 'e': elf_file = optarg; break;
      default: break;
    }
  }
  return 0;  
}

static long load_img(const char *filename) {
  if (filename == NULL) return 4096;
  FILE *fp = fopen(filename, "rb");

  if (fp == NULL) {
    perror("Error opening image file");
    printf("Path attemped: %s\n", filename);
  }

  fseek(fp, 0, SEEK_END);
  long size = ftell(fp);

  Log("The image is %s, size = %ld", filename, size);
  
  fseek(fp, 0, SEEK_SET);
  int ret = fread(guest_to_host(0x80000000), size, 1, fp);
  assert(ret == 1);

  fclose(fp);
  return size;
}

void sim_init(int argc, char *argv[]) {
  parse_args(argc, argv);

  char *img_file = NULL;
  long img_size = 0;

  for (int i = 1; i < argc; i++) {
    if (strcmp(argv[i], "--img") == 0 && i + 1 < argc) img_file = argv[i + 1];
  }

  if (img_file != NULL) img_size = load_img(img_file);
  else {
    printf("No image file\n");
    exit(1);
  }

  if (diff) init_difftest(diff_so_file, img_size);

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
