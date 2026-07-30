#include <common.h>
#include <npc.h>
#include <paddr.h>
#include <device/map.h>
#include <getopt.h>
#include "ref_so_file.h"

// NO.
uint32_t mvendorid = 0x79737978; // "ysyx"
uint32_t marchid   = 0x26010027; // "26010027"

static char *elf_file = NULL;

void init_ftrace(const char *elf_sile);
void sdb_set_batch_mode();

static int parse_args(int argc, char *argv[]) {
  const struct option table[] = {
    {"elf"   , required_argument, NULL, 'e'},
    {"help"  , no_argument      , NULL, 'h'},
    {0       , 0                , NULL,  0 },
  };
  int o;
  while ((o = getopt_long(argc, argv, "-e:h", table, NULL)) != -1) {
    switch (o) {
      case 'e': elf_file = optarg; break;
      case 1:   break; // skip positional args (e.g. --img value consumed elsewhere)
      case 'h':
        printf("Usage: %s [OPTION...] --img IMAGE\n\n", argv[0]);
        printf("\t-e,--elf=FILE           load ELF for function trace\n");
        printf("\n");
        exit(0);
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
  int ret = fread(guest_to_flash(CONFIG_Flash_BASE), size, 1, fp);
  assert(ret == 1);

  // memcpy(guest_to_flash(CONFIG_Flash_BASE), guest_to_host(CONFIG_MROM_BASE), size);
  // FILE *fp_flash = fopen("char-test/char-test.bin", "rb");
  // fread(guest_to_flash(CONFIG_Flash_BASE), 36, 1, fp_flash);
  // fclose(fp_flash);

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

static void reset_n_cycles(int n) {
  for (int i = 0; i < n; i++) {
    top->clock = 0; top->eval();
    top->clock = 1; top->eval();
  }
}

static void init_verilator(int argc, char *argv[]) {
  Verilated::commandArgs(argc, argv);
  Verilated::traceEverOn(true);

  top->trace(tfp, 99);
  tfp->open("wave.fst");

  top->reset = 1; top->clock = 0;
  reset_n_cycles(10);       // 需保证 10 级同步器充分填满
  top->reset = 0;
}

static void init_csr() {
  cpu_n.mstatus = 0;
  cpu_n.mtvec   = 0;
  cpu_n.mepc    = 0;
  cpu_n.mcause  = 0;
}

static void welcome() {
  Log("Trace: %s", MUXDEF(CONFIG_TRACE, ANSI_FMT("ON", ANSI_FG_GREEN), ANSI_FMT("OFF", ANSI_FG_RED)));
  Log("Build time: %s, %s", __TIME__, __DATE__);
  printf("Welcome to %s-YSYXSOC!\n", ANSI_FMT(str(riscv32), ANSI_FG_YELLOW ANSI_BG_MAGENTA));
  printf("For help, type \"help\"\n");
}

void sim_init(int argc, char *argv[]) {
  /* Parse arguments. */
  parse_args(argc, argv);
  
  /* Load the image to memory. */
  init_img(argc, argv);

 /* Initialize the verilator */
  init_verilator(argc, argv);

  /* Initialize CSRs */
  init_csr();

  /* Initialize batch mode */
#ifdef CONFIG_BATCH_MODE
  sdb_set_batch_mode();
#endif

  /* Initialize footrace */
#ifdef CONFIG_FTRACE
  if (elf_file != NULL) init_ftrace(elf_file);
#endif

  /* Initialize devices. */
#ifdef CONFIG_DEVICE
  init_device();
#endif

  /* Initialize differential testing. */
#ifdef CONFIG_DIFFTEST
  init_difftest(REF_SO_FILE, img_size);
#endif

  /* Initialize the simple debugger. */
  init_sdb();

  /* Display welcome message. */
  welcome();
}
