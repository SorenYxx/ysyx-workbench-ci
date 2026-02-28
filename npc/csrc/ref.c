#include <dlfcn.h>
#include <npc.h>
#include <common.h>
#include <paddr.h>

void (*ref_difftest_memcpy)(uint32_t addr, void *buf, size_t n, bool direction) = NULL;
void (*ref_difftest_regcpy)(void *dut, bool direction) = NULL;
void (*ref_difftest_exec)(uint64_t n) = NULL;

static bool is_skip_ref = false;
// static int skip_dut_nr_inst = 0;

void difftest_skip_ref() {
  is_skip_ref = true;
  // skip_dut_nr_inst = 0;
}

void init_difftest(char *ref_so_file, long img_size) {
    void *handle = dlopen(ref_so_file, RTLD_LAZY);
    assert(handle);

    ref_difftest_memcpy = (void (*)(uint32_t, void *, size_t, bool))dlsym(handle, "difftest_memcpy");
    ref_difftest_regcpy = (void (*)(void *, bool))dlsym(handle, "difftest_regcpy");
    ref_difftest_exec = (void (*)(uint64_t))dlsym(handle, "difftest_exec");

    Log("Differential testing: %s", ANSI_FMT("ON", ANSI_FG_GREEN));
    Log("The result of every instruction will be compared with %s. "
      "This will help you a lot for debugging, but also significantly reduce the performance. "
      "If it is not necessary, you can turn it off in menuconfig.", ref_so_file);
      
    ref_difftest_memcpy(0x80000000, guest_to_host(0x80000000), img_size, DIFFTEST_TO_REF);
    
    ref_difftest_regcpy(&cpu_n, DIFFTEST_TO_REF);
}

static bool isa_difftest_checkregs(CPU_state *ref_r, uint32_t pc) {
  // regs
  for (int i = 0; i < 31; i ++) {
    if (ref_r->gpr[i] != R[i]) {
      Log("Register (%d)[%s] mismatch! [REF] 0x%08x | [DUT] 0x%08x at PC 0x%08x", i, reg_name(i), ref_r->gpr[i], R[i], pc);
      return false;
    }
  }

// pc
  if (ref_r->pc != pc) {
    Log("PC mismatch! [REF] 0x%08x | [DUT] 0x%08x", ref_r->pc, pc);
    return false;
  }

  // csrs
  // if (ref_r->mstatus != cpu_n.mstatus) {
  //   Log("CSR mstatus mismatch! [REF] 0x%08x | [DUT] 0x%08x at PC 0x%08x", ref_r->mstatus, cpu_n.mstatus, pc);
  //   return false;
  // }
  // if (ref_r->mtvec != cpu_n.mtvec) {
  //   Log("CSR mtvec mismatch! [REF] 0x%08x | [DUT] 0x%08x at PC 0x%08x", ref_r->mtvec, cpu_n.mtvec, pc);
  //   return false;
  // }
  // if (ref_r->mepc != cpu_n.mepc) {
  //   Log("CSR mepc mismatch! [REF] 0x%08x | [DUT] 0x%08x at PC 0x%08x", ref_r->mepc, cpu_n.mepc, pc);
  //   return false;
  // }
  // if (ref_r->mcause != cpu_n.mcause) {
  //   Log("CSR mcause mismatch! [REF] 0x%08x | [DUT] 0x%08x at PC 0x%08x", ref_r->mcause, cpu_n.mcause, pc);
  //   return false;
  // }

  return true;
}

static void checkregs(CPU_state *ref, uint32_t pc) {
  if (!isa_difftest_checkregs(ref, pc)) {
    npc_state.state = NPC_ABORT;
    npc_state.halt_pc = pc;
    isa_reg_display();
  }
}

void check_difftest() {
  CPU_state ref_regs;// use to check

  if (is_skip_ref) {
    ref_difftest_regcpy(&cpu_n, DIFFTEST_TO_REF);
    is_skip_ref = false;
    return;
  }

  ref_difftest_exec(1);
  ref_difftest_regcpy(&ref_regs, DIFFTEST_FROM_REF);
  // printf("check_difftest at ref pc = 0x%08x dut pc: 0x%08x\n", ref_regs.pc, top->cur_pc);

  checkregs(&ref_regs, top->cur_pc);
}
