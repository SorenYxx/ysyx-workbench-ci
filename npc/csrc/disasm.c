#include <npc.h>
#include <common.h>
// #include <capstone/capstone.h>

void itrace_record(int pc, int inst) {
  // csh handle;
  // cs_insn *insn;

  // if (cs_open(CS_ARCH_RISCV, CS_MODE_RISCV32, &handle) != CS_ERR_OK) return;

  // size_t count = cs_disasm(handle, (uint8_t *)&inst, 4, pc, 0, &insn);
  // if (count > 0) {
  //   printf("0x%08x: %08x %s %s\n", pc, inst, insn[0].mnemonic, insn[0].op_str);
  //   cs_free(insn, count);
  // }
  // cs_close(&handle);
}
