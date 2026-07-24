#ifndef __NPC_H__
#define __NPC_H__

#include <common.h>
#include <arpa/inet.h> 
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include "verilated.h"
#include "VysyxSoCFull.h"
#include "VysyxSoCFull___024root.h"

#define CPU_PC()   (top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__pc)
#define CPU_INST() (top->rootp->ysyxSoCFull__DOT__asic__DOT__cpu__DOT__cpu__DOT__my_IFU__DOT__inst)
#include "verilated_fst_c.h"

//MEM -- defined via Kconfig (autoconf.h), fallback defaults for IDE
#ifndef CONFIG_PSRAM_BASE
#define CONFIG_PSRAM_BASE 0x80000000
#define CONFIG_PSRAM_SIZE 0x400000
#define CONFIG_MROM_BASE  0x20000000
#define CONFIG_MROM_SIZE  0x1000
#define CONFIG_SRAM_BASE  0x0f000000
#define CONFIG_SRAM_SIZE  0x2000
#define CONFIG_SDRAM_BASE 0xa0000000
#define CONFIG_SDRAM_SIZE 0x2000000
#endif

#define MEM_REGION_NUM 4

typedef struct {
  uint32_t base;
  uint32_t size;
  uint32_t offset; // offset into pmem
} mem_region_t;

//mem
extern uint8_t pmem[];
extern const mem_region_t mem_regions[];

//state
enum { NPC_RUNNING, NPC_STOP, NPC_END, NPC_ABORT , NPC_QUIT };

typedef struct {
  int state;
  uint32_t halt_pc;
} NPCState;

typedef struct {
  uint32_t gpr[32];
  uint32_t pc;

  //CSRs
  uint32_t mstatus;
  uint32_t mtvec;
  uint32_t mepc;
  uint32_t mcause;
} CPU_state;

extern uint32_t mvendorid;
extern uint32_t marchid;

extern NPCState npc_state;
extern CPU_state cpu_n;

int is_exit_status_bad();

//verilator
extern VerilatedFstC* tfp;
extern VysyxSoCFull* top;

void itrace_record(int pc, int inst);

//exec
void sim_init(int argc, char *argv[]);
void sim_exit();
void init_sdb();

void sdb_mainloop();
void cpu_exec(uint64_t n);
 

//reg
void isa_reg_display();
word_t isa_reg_str2val(const char *s, bool *success);

static inline const char* reg_name(int idx) {
  extern const char* regs[];
  return regs[idx];
}

//difftest
void init_difftest(char *ref_so_file, long img_size);
void check_difftest();
void difftest_skip_ref();
// void difftest_skip_dut(int nr_ref, int nr_dut);

#endif
