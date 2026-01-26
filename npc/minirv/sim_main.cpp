#include <stdint.h>
#include <stdio.h>
#include <verilated_fst_c.h>
#include <verilated.h>

#define MSB 128 * 1024 * 1024
uint8_t pmem[MSB] = {};

uint8_t* guest_to_host(uint32_t addr) { return pmem + (addr - 0x80000000); } //get the uint8_t addr

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

extern "C" void ebreak(uint32_t R) {
  if (R == 0) printf("HIT GOOD TRAP\n");
  else printf("HIT BAD TRAP with R[0x0A]: %u\n", R);
}

void load_img(char *img_file) {
    if (img_file == NULL) return;
    FILE *fp = fopen(img_file, "rb");
    // 将镜像文件直接读入到 pmem 的起始地址
    fseek(fp, 0, SEEK_END);
    long size = ftell(fp);
    fseek(fp, 0, SEEK_SET);
    fread(guest_to_host(0x80000000), size, 1, fp);
    fclose(fp);
}

int main() {

  Verilated::commandArgs(argc, argv);
  Verilated::traceEverOn(true);

  VerilatedFstC* tfp = new VerilatedFstC;
  Vminirv* top = new Vminirv;

  tfp->trace(tfp, 99);
  top->open("wave.fst");

  while (1) {
    
    top->inst = pmem_read(top->pc);
    top->eval();
    
  }

  tfp->close();
  delete tfp;
  delete top;

}
