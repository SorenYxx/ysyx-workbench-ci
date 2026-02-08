#ifndef __NPC_H__
#define __NPC_H__

#include <common.h>
#include <arpa/inet.h> 
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include "verilated.h"
#include "Vminirv.h"
#include "verilated_fst_c.h"

//MEM
#define MSB 128 * 1024 * 1024
#define ADDR 0x80000000

//MMIO
#define SERIAL_PORT     0x10000000
#define RTC_ADDR        0x10000048

//mem
extern uint8_t pmem[MSB];

//state
enum { NPC_RUNNING, NPC_STOP, NPC_END, NPC_ABORT , NPC_QUIT };

typedef struct {
  int state;
  uint32_t halt_pc;
} NPCState;

extern NPCState npc_state;

int is_exit_status_bad();

//verilog
extern VerilatedFstC* tfp;
extern Vminirv* top;

//com_para
int parse_args(int argc, char *argv[]);

void itrace_record(int pc, int inst);
extern bool g_enable_itrace;
extern bool g_enable_mtrace;
extern bool g_enable_ftrace;

//exec
void sim_init(int argc, char *argv[]);
void sim_exit();
void init_sdb();

void sdb_mainloop();
void cpu_exec(uint64_t n);
 

//reg
void isa_reg_display();
word_t isa_reg_str2val(const char *s, bool *success);

#endif
