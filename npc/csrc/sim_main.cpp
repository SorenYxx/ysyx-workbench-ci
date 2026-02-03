#include <npc.h>
#include <common.h>

#define MSB 128 * 1024 * 1024
#define ADDR 0x80000000

#define SERIAL_PORT     0x10000000
#define RTC_ADDR        0x10000048

uint8_t pmem[MSB] = {};
uint32_t R = 0;
int is_end = 0;

VerilatedFstC* tfp = new VerilatedFstC;
Vminirv* top = new Vminirv;
vluint64_t main_time = 0;
static uint64_t static_time = 0;

static uint8_t* guest_to_host(uint32_t addr) { return pmem + (addr - ADDR); } //get the uint8_t addr

static uint64_t get_host_time() {
  struct timeval tv;
  gettimeofday(&tv, NULL);
 
  return (uint64_t)tv.tv_sec * 1000000 + tv.tv_usec;
}

extern "C" int pmem_read(int raddr) {
  uint32_t addr = (uint32_t)raddr & ~0x3u;

  if (addr == RTC_ADDR) { static_time = get_host_time(); return (uint32_t)static_time; }
  if (addr == RTC_ADDR + 4) return (uint32_t)(static_time >> 32);

  if (addr < ADDR || addr >= 0x88000000) return 0;

  return *(int *)(guest_to_host(addr)); //change to int* then get the uint32_t addr
}

extern "C" void pmem_write(int waddr, int wdata, char wmask) {
  uint32_t addr = (uint32_t)waddr & ~0x3u;

  if (addr == SERIAL_PORT) putchar(wdata); //
  
  if (addr < ADDR || addr >= 0x88000000) return;
  uint8_t *pt = guest_to_host(addr);

  for (int i = 0; i < 4; i++) {
    if ((wmask >> i) & 0x1) pt[i] = (uint8_t)((wdata >> (i * 8)) & 0xFF);
  }
}

extern "C" void get_reg(int r) {
  R = r;
}

extern "C" void ebreak() {
  if (R == 0) { printf("\n\033[1;32mHIT GOOD TRAP\033[0m\n"); is_end = 1; }
  else {
    printf("\n\033[1;31mHIT BAD TRAP\033[0m\n\n");
    exit(0);
  }
}


// static char* rl_gets() {
//   static char *line_read = NULL;

//   if (line_read) {
//     free(line_read);
//     line_read = NULL;
//   }

//   line_read = readline("(npc) ");

//   if (line_read && *line_read) {
//     add_history(line_read);
//   }

//   return line_read;
// }

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

static void sim_init(int argc, char *argv[]) {
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
}

static void step_and_eval() {
  top->clk = 0; top->eval();
  top->clk = 1; top->eval();

  tfp->dump(main_time);
  main_time ++;  
}

static void cpu_exec(uint64_t n) {
  for (uint64_t i = 0; i < n; i ++) {
    step_and_eval();
    if (is_end) {
      //npc_state = NPC_END;
      break;
    }
  }
}

static int sim_exit() {
  tfp->close();
  delete tfp;
  delete top;
  return 0;
}

int main(int argc, char *argv[]) {
  sim_init(argc, argv);

  if (1) cpu_exec(-1);
  //else sdb_mainloop();

  return sim_exit();
}
