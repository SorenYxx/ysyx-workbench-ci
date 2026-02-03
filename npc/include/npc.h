#ifndef __NPC_H__
#define __NPC_H__

#include <common.h>
#include <arpa/inet.h> 
#include "verilated.h"
#include "Vminirv.h"
#include "verilated_fst_c.h"

#define MSB 128 * 1024 * 1024
#define ADDR 0x80000000

#define SERIAL_PORT     0x10000000
#define RTC_ADDR        0x10000048

enum { NPC_RUNNING, NPC_STOP, NPC_END, NPC_ABORT };

typedef struct {
  int state;
  uint32_t halt_pc;
  uint32_t halt_ret;
} NPCState;

extern NPCState npc_state;
extern VerilatedFstC* tfp;
extern Vminirv* top;

void sdb_mainloop();
void cpu_exec(uint64_t n);

void isa_reg_display();
uint32_t pmem_read(uint32_t addr);

#endif
