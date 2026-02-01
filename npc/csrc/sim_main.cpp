#include <stdint.h>
#include <stdio.h>
#include "verilated_fst_c.h"
#include "Vminirv.h"
#include "verilated.h"
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <sys/time.h>

#define MSB 128 * 1024 * 1024
#define ADDR 0x80000000

#define SERIAL_PORT     0x10000000
#define RTC_ADDR        0x10000048

uint8_t pmem[MSB] = {};
uint32_t R;
int pp = 0;

static uint8_t* guest_to_host(uint32_t addr) { return pmem + (addr - ADDR); } //get the uint8_t addr

static uint64_t get_host_time() {
  struct timeval tv;
  gettimeofday(&tv, NULL);
  
  return (uint64_t)tv.tv_sec * 1000000 + tv.tv_usec;
}

extern "C" int pmem_read(int raddr) {
  uint32_t addr = (uint32_t)raddr & ~0x3u;

  if (addr == RTC_ADDR) {printf("0x%08x\n", (uint32_t)get_host_time());return (uint32_t)get_host_time();}
  if (addr == RTC_ADDR + 4) return (uint32_t)(get_host_time() >> 32);

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
  if (R == 0) { printf("\n\033[1;32mHIT GOOD TRAP\033[0m\n"); pp = 1; }
  else {
    printf("\n\033[1;31mHIT BAD TRAP\033[0m\n\n");
    exit(0);
  }
}

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

vluint64_t main_time = 0;

int main(int argc, char *argv[]) {
  char *img_file = NULL;

  //
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

  VerilatedFstC* tfp = new VerilatedFstC;
  Vminirv* top = new Vminirv;

  top->trace(tfp, 99);
  tfp->open("wave.fst");

  top->rst = 1;
  top->clk = 0; 
  top->eval();
  top->clk = 1;
  top->eval();
  top->rst = 0;

  while (!pp) {    
    //printf("At %ld PC = 0x%08x Inst = 0x%08x\n\n", main_time, top->cur_pc, top->cur_inst);

    /*if (pp) {
      printf("At %ld PC = 0x%08x Inst = 0x%08x\n\n", main_time, top->cur_pc, top->cur_inst);
      break;
    }*/

    top->clk = 0;
    top->eval();

    top->clk = 1;
    top->eval();

    tfp->dump(main_time);
    main_time ++;
  }

  tfp->close();
  delete tfp;
  delete top;
  return 0;
}
