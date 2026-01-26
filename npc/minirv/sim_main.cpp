#include <stdint.h>
#include <stdio.h>
#include "verilated_fst_c.h"
#include "Vminirv.h"
#include "verilated.h"
#include <iostream>

#define MSB 128 * 1024 * 1024
uint8_t pmem[MSB] = {};
uint32_t R;

static uint8_t* guest_to_host(uint32_t addr) { return pmem + (addr - 0x80000000); } //get the uint8_t addr

extern "C" int pmem_read(int raddr) {
  uint32_t addr = (uint32_t)raddr & ~0x3u;
  if (addr < 0x80000000 || addr >= 0x88000000) return 0;
  
  return *(int *)(guest_to_host(addr)); //change to int* then get the uint32_t addr
}

extern "C" void pmem_write(int waddr, int wdata, char wmask) {
  uint32_t addr = (uint32_t)waddr & ~0x3u;
  
  if (addr < 0x80000000 || addr >= 0x88000000) return;
  uint8_t *pt = guest_to_host(addr);

  for (int i = 0; i < 4; i++) {
    if ((wmask >> i) & 0x1) pt[i] = (uint8_t)((wdata >> (i * 8)) & 0xFF);
  }
}

extern "C" void get_reg(int r) {
  R = r;
}

extern "C" void ebreak() {
  if (R == 0) printf("HIT GOOD TRAP\n");
  else printf("HIT BAD TRAP with R[0x0A]: %u\n", R);
}

static void load_bin(char *filename) {
    if (filename == NULL) return;
    FILE *fp = fopen(filename, "rb");

    fseek(fp, 0, SEEK_END);
    long size = ftell(fp);
    fseek(fp, 0, SEEK_SET);
    fread(guest_to_host(0x80000000), size, 1, fp);

    fclose(fp);
}

vluint64_t main_time = 0;

int main(int argc, char *argv[]) {

  load_bin("sum.bin");

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

  while (main_time != 1000) {    
    top->clk = 0;
    top->eval();

    top->clk = 1;
    top->eval();

    tfp->dump(main_time);
    main_time ++;

    printf("PC = 0x%08x, Inst = 0x%08x\n", top->cur_pc, top->cur_inst);
  }

  tfp->close();
  delete tfp;
  delete top;
  return 0;
}
