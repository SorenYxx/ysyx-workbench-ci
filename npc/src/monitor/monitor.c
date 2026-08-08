#include <common.h>
#include <npc.h>
#include <paddr.h>
#include <device/map.h>
#include <getopt.h>

#define RESET_TIME MUXDEF(CONFIG_SOC, 10, 1) // 需保证 10 级同步器充分填满

// NO.
uint32_t mvendorid = 0x79737978; // "ysyx"
uint32_t marchid   = 0x26010027; // "26010027"

static char *elf_file = NULL;

IFDEF(CONFIG_FTRACE, void init_ftrace(const char *elf_sile));
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
  int ret = fread(MUXDEF(CONFIG_SOC, guest_to_flash(PC_START), guest_to_host(PC_START)), size, 1, fp);
  assert(ret == 1);

  // memcpy(guest_to_flash(CONFIG_FLASH_BASE), guest_to_host(CONFIG_MROM_BASE), size);
  // FILE *fp_flash = fopen("char-test/char-test.bin", "rb");
  // fread(guest_to_flash(CONFIG_FLASH_BASE), 36, 1, fp_flash);
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

#ifdef CONFIG_NVBOARD
void nvboard_bind_all_pins(VysyxSoCFull *top);
static void init_nvboard() {
  nvboard_bind_all_pins(top);
  nvboard_init();
}
#endif

static void init_verilator(int argc, char *argv[]) {
  Verilated::commandArgs(argc, argv);
  Verilated::traceEverOn(true);

#ifdef CONFIG_WAVE_DUMP
  top->trace(tfp, 99);
  tfp->open("wave.fst");
#endif

  top->reset = 1;
  reset_n_cycles(RESET_TIME); // 需保证 10 级同步器充分填满
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
  Log("Waveform dump: %s", MUXDEF(CONFIG_WAVE_DUMP, ANSI_FMT("ON", ANSI_FG_GREEN), ANSI_FMT("OFF", ANSI_FG_RED)));
  Log("Build time: %s, %s", __TIME__, __DATE__);
  printf("== Welcome to %s-YSYXSOC! ==\n", ANSI_FMT(str(riscv32), ANSI_FG_YELLOW ANSI_BG_MAGENTA));
  printf("== For help, type \"help\" ==\n");
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
  IFDEF(CONFIG_BATCH_MODE, sdb_set_batch_mode());

  /* Initialize footrace */
  IFDEF(CONFIG_FTRACE, if (elf_file != NULL) init_ftrace(elf_file));

  /* Initialize devices. */
  IFDEF(CONFIG_DEVICE, init_device());

  /* Initialize differential testing. */
  IFDEF(CONFIG_DIFFTEST, init_difftest(elf_file, img_size));

  /* Initialize NVBoard */
  IFDEF(CONFIG_NVBOARD, init_nvboard());

  /* Initialize the simple debugger. */
  init_sdb();

  /* Display welcome message. */
  welcome();
}
