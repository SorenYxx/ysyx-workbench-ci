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

enum { NPC_RUNNING, NPC_STOP, NPC_END, NPC_ABORT , NPC_QUIT};

extern uint8_t pmem[MSB];

typedef struct {
  int state;
  uint32_t halt_pc;
} NPCState;

extern NPCState npc_state;
extern VerilatedFstC* tfp;
extern Vminirv* top;

void sim_init(int argc, char *argv[]);
void sdb_mainloop();
void cpu_exec(uint64_t n);

void isa_reg_display();

void init_sdb();

#endif
