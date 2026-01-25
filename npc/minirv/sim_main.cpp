#include <stdint.h>
#include <stdio.h>
#include <verilated_fst_c.h>
#include <verilated.h>

#define MSB 128 * 1024 * 1024
uint8_t pmem[MSB] = {};

uint8_t* guest_to_host(uint32_t addr) { return pmem + (addr - 0x80000000); }

extern "C" int pmem_read(int raddr) {
  uint32_t addr = (uint32_t)raddr & ~0x3u;
  if (addr < 0x80000000 || addr >= 0x88000000) return 0;
  
  return  *(int *)(guest_to_host(addr));
}

extern "C" void pmem_write(int waddr, int wdata, char wmask) {
  uint32_t addr = (uint32_t)waddr & ~0x3u;
  
  if (addr < 0x80000000 || addr >= 0x88000000) return;
  uint8_t *pt = guest_to_host(addr);

  for (int i = 0; i < 4; i++) {
    if ((wmask >> i) & 0x1) pt[i] = (uint8_t)((wdata >> (i * 8)) & 0xFF);
  }
}

int main() {
  while () {
    
    top->inst = pmem_read(top->pc);
    top->eval();
    
  }

