#include <common.h>
#include <npc.h>
#include <paddr.h>
#include <getopt.h>

// NO.
uint32_t mvendorid = 0x79737978; // "ysyx"
uint32_t marchid   = 0x26010027; // "26010027"

// ftrace
static char *elf_file = NULL;

// difftest
static char *diff_so_file = NULL;
bool diff = false;

// trace
bool g_enable_itrace = false;
bool g_enable_mtrace = false;
bool g_enable_ftrace = false;
bool g_enable_etrace = false;

void init_ftrace(const char *elf_sile);

// batch
void sdb_set_batch_mode();

static int parse_args(int argc, char *argv[]) {
  const struct option table[] = {
    {"batch" , no_argument      , NULL, 'b'},
    {"itrace", no_argument      , NULL, 'i'},
    {"mtrace", no_argument      , NULL, 'm'},
    {"ftrace", no_argument      , NULL, 'f'},
    {"etrace", no_argument      , NULL, 'x'},
    {"diff"  , required_argument, NULL, 'd'},
    {"elf"   , required_argument, NULL, 'e'},
    {0       , 0                , NULL,  0 },
  };
  int o;
  while ((o = getopt_long(argc, argv, "-bimfxd:e:", table, NULL)) != -1) {
    switch (o) {
      case 'b': sdb_set_batch_mode(); break;
      case 'i': g_enable_itrace = true; break;
      case 'm': g_enable_mtrace = true; break;
      case 'f': g_enable_ftrace = true; break;
      case 'x': g_enable_etrace = true; break;
      case 'd': diff_so_file = optarg; if (diff_so_file) diff = true; break;
      case 'e': elf_file = optarg; break;
      default: break;
    }
  }
  return 0;  
}

// img
long img_size = 0;

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

static void init_img(int argc, char *argv[]) {
  char *img_file = NULL;

  for (int i = 1; i < argc; i++) {
    if (strcmp(argv[i], "--img") == 0 && i + 1 < argc) img_file = argv[i + 1];
  }

  if (img_file != NULL) img_size = load_img(img_file);
  else {
    Log("No image file\n");
    exit(1);
  }
}

// verilator and difftest
static void init_verilator(int argc, char *argv[]) {
  Verilated::commandArgs(argc, argv);
  Verilated::traceEverOn(true);

  top->trace(tfp, 99);
  tfp->open("wave.fst");

  top->rst = 1; top->clk = 0; 
  top->eval(); top->clk = 1;
  top->eval(); top->rst = 0;
}

// CSRs
static void init_csr() {
  cpu_n.mstatus = 0;
  cpu_n.mtvec   = 0;
  cpu_n.mepc    = 0;
  cpu_n.mcause  = 0;
}

// welcome
static void welcome() {
  Log("Trace: %s", MUXDEF(CONFIG_TRACE, ANSI_FMT("ON", ANSI_FG_GREEN), ANSI_FMT("OFF", ANSI_FG_RED)));
  Log("Build time: %s, %s", __TIME__, __DATE__);
  printf("Welcome to %s-NPC!\n", ANSI_FMT(str(riscv), ANSI_FG_YELLOW ANSI_BG_RED));
  printf("For help, type \"help\"\n");
}

void sim_init(int argc, char *argv[]) {
  /* Parse arguments. */
  parse_args(argc, argv);

  /* Load the image to memory. This will overwrite the built-in image. */
  init_img(argc, argv);

  /* Initialize ftrace */
  if (g_enable_ftrace) init_ftrace(elf_file);

  /* Initialize CSRs */
  init_csr();
  
  /* Initialize differential testing. */
  // if (diff) init_difftest(diff_so_file, img_size);

  /* Initialize the verilator */
  init_verilator(argc, argv);

  /* Initialize the simple debugger. */
  init_sdb();

  /* Display welcome message. */
  welcome();

  if (diff) init_difftest(diff_so_file, img_size);
}
