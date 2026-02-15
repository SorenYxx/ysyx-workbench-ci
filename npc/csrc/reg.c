#include <npc.h>
#include <common.h>

uint32_t R[31] = {};

extern "C" void get_reg(int waddr, int r) {
  R[waddr] = r;
}

const char *regs[] = {
  "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
  "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
  "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
  "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"
};

void isa_reg_display() {
  printf("pc:0x%08X\n", top->cur_pc);
  for (int i = 0; i < 31; i ++) {
    printf("%s: 0x%08X\n", regs[i], R[i]);
  }
}

word_t isa_reg_str2val(const char *s, bool *success) {
  *success = false;
  for (int i = 0; i < 32; i ++) {
    if (strcmp(regs[i], s) == 0) {
      *success = true;
      return R[i];
    }
    else if (strcmp("pc", s) == 0) {
      *success = true;
      return top->cur_pc;
    }
  }
  printf("no this reg!\n");
  return 0;
}

