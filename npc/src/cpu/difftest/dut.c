#include <dlfcn.h>
#include <npc.h>
#include <common.h>
#include <paddr.h>

void (*ref_difftest_memcpy)(uint32_t addr, void *buf, size_t n, bool direction) = NULL;
void (*ref_difftest_regcpy)(void *dut, bool direction) = NULL;
void (*ref_difftest_exec)(uint64_t n) = NULL;

static bool is_skip_ref = false;

void difftest_skip_ref() {
  is_skip_ref = true;
  // skip_dut_nr_inst = 0;
}

void init_difftest(const char *ref_so_file, long img_size) {
    void *handle = dlopen(ref_so_file, RTLD_LAZY);
    assert(handle);

    ref_difftest_memcpy = (void (*)(uint32_t, void *, size_t, bool))dlsym(handle, "difftest_memcpy");
    ref_difftest_regcpy = (void (*)(void *, bool))dlsym(handle, "difftest_regcpy");
    ref_difftest_exec = (void (*)(uint64_t))dlsym(handle, "difftest_exec");

    Log("Differential testing: %s", ANSI_FMT("ON", ANSI_FG_GREEN));
    Log("The result of every instruction will be compared with %s. "
      "This will help you a lot for debugging, but also significantly reduce the performance. "
      "If it is not necessary, you can turn it off in menuconfig.", ref_so_file);

#ifdef CONFIG_SOC
    ref_difftest_memcpy(CONFIG_FLASH_BASE, guest_to_flash(CONFIG_FLASH_BASE), img_size, DIFFTEST_TO_REF);
#else
    ref_difftest_memcpy(CONFIG_PSRAM_BASE, guest_to_host(CONFIG_PSRAM_BASE), img_size, DIFFTEST_TO_REF);
#endif

    ref_difftest_regcpy(&cpu_n, DIFFTEST_TO_REF);
}

static bool isa_difftest_checkregs(CPU_state *ref_r) {
  // regs
  for (int i = 0; i < 31; i ++) {
    if (ref_r->gpr[i] != R[i]) {
      Log("Register (%d)[%s] mismatch! [NEMU] 0x%08x | [NPC] 0x%08x at PC 0x%08x", i, reg_name(i), ref_r->gpr[i], R[i], CPU_PC());
      return false;
    }
  }

  // csrs
  if (ref_r->mstatus != cpu_n.mstatus) {
    Log("CSR mstatus mismatch! [NEMU] 0x%08x | [NPC] 0x%08x at PC 0x%08x", ref_r->mstatus, cpu_n.mstatus, CPU_PC());
    return false;
  }
  if (ref_r->mtvec != cpu_n.mtvec) {
    Log("CSR mtvec mismatch! [NEMU] 0x%08x | [NPC] 0x%08x at PC 0x%08x", ref_r->mtvec, cpu_n.mtvec, CPU_PC());
    return false;
  }
  if (ref_r->mepc != cpu_n.mepc) {
    Log("CSR mepc mismatch! [NEMU] 0x%08x | [NPC] 0x%08x at PC 0x%08x", ref_r->mepc, cpu_n.mepc, CPU_PC());
    return false;
  }
  if (ref_r->mcause != cpu_n.mcause) {
    Log("CSR mcause mismatch! [NEMU] 0x%08x | [NPC] 0x%08x at PC 0x%08x", ref_r->mcause, cpu_n.mcause, CPU_PC());
    return false;
  }

  return true;
}

static void checkregs(CPU_state *ref) {
  if (!isa_difftest_checkregs(ref)) {
    npc_state.state = NPC_ABORT;
    npc_state.halt_pc = CPU_PC();
    isa_reg_display();
  }
}

void check_difftest() {
  CPU_state ref_regs;// use to check

  if (is_skip_ref) {
    // 跳过本次对比
    ref_difftest_regcpy(&cpu_n, DIFFTEST_TO_REF);
    is_skip_ref = false;
    return;
  }

  // 流水线pc对齐
  ref_difftest_regcpy(&ref_regs, DIFFTEST_FROM_REF);
  if (ref_regs.pc != CPU_PC()) {
    Log("PC mismatch! [NEMU] 0x%08x | [NPC] 0x%08x", ref_regs.pc, CPU_PC());
    npc_state.state = NPC_ABORT;
    npc_state.halt_pc = CPU_PC();
    isa_reg_display();
    return;
  }

  ref_difftest_exec(1);
  ref_difftest_regcpy(&ref_regs, DIFFTEST_FROM_REF);
  checkregs(&ref_regs);
}
