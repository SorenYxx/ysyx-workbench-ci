#include <npc.h>
#include <common.h>
#include <../../../nemu/tools/capstone/repo/include/capstone/capstone.h>

static csh handle = 0;

void init_disasm() {
  // if (cs_open(CS_ARCH_RISCV, CS_MODE_RISCV32 | CS_MODE_RISCVC, &handle) != CS_ERR_OK) {
  //   handle = 0;
  //   Log("capstone init failed, itrace disabled");
  // }
}

void itrace_record(int pc, int inst) {
  IFDEF(CONFIG_ITRACE,
    if (handle != 0) {
      cs_insn *insn;
      size_t count = cs_disasm(handle, (uint8_t *)&inst, 4, pc, 0, &insn);
      if (count > 0) {
        log_write("0x%08x: %08x  %s %s\n", pc, inst, insn[0].mnemonic, insn[0].op_str);
        cs_free(insn, count);
      } else {
        log_write("0x%08x: %08x  <invalid>\n", pc, inst);
      }
    }
  );
}
