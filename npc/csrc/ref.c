#include <dlfcn.h>
#include <npc.h>
#include <common.h>
#include <paddr.h>

void (*ref_difftest_memcpy)(uint32_t addr, void *buf, size_t n, bool direction) = NULL;
void (*ref_difftest_regcpy)(void *dut, bool direction) = NULL;
void (*ref_difftest_exec)(uint64_t n) = NULL;

void init_difftest(char *ref_so_file, long img_size) {
    void *handle = dlopen(ref_so_file, RTLD_LAZY);
    assert(handle);

    ref_difftest_memcpy = (void (*)(uint32_t, void *, size_t, bool))dlsym(handle, "difftest_memcpy");
    ref_difftest_regcpy = (void (*)(void *, bool))dlsym(handle, "difftest_regcpy");
    ref_difftest_exec = (void (*)(uint64_t))dlsym(handle, "difftest_exec");

    ref_difftest_memcpy(0x80000000, guest_to_host(0x80000000), img_size, DIFFTEST_TO_REF);
    
    ref_difftest_regcpy(&cpu_state, DIFFTEST_TO_REF);
}

void check_difftest() {
  NPCState ref_regs;
  ref_difftest_exec(1);

  ref_difftest_regcpy(&ref_regs, DIFFTEST_FROM_REF);

  if (!isa_reg_display()) {
    printf("Difftest Error at PC = 0x%08x\n", top->cur_pc);
    trap_state = TRAP_FAIL;
  }
}
