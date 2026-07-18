#ifndef __MEMORY_PADDR_H__
#define __MEMORY_PADDR_H__

#include <common.h>

#define PMEM_LEFT  ((paddr_t)CONFIG_MBASE)
#define PMEM_RIGHT ((paddr_t)CONFIG_MBASE + CONFIG_MSIZE - 1)
#define RESET_VECTOR (PMEM_LEFT + CONFIG_PC_RESET_OFFSET)

uint8_t* guest_to_host(paddr_t paddr);

// paddr_t host_to_guest(uint8_t *haddr);
#ifdef __cplusplus
extern "C" {
#endif

// ----- DPI-C------
int pmem_read(int raddr);
void pmem_write(int waddr, int wdata, int wmask);

void is_illegal_inst();

void ebreak();

void ftrace_print(uint32_t pc, uint32_t target, int rd, int rs1);

#ifdef __cplusplus
}
#endif

#endif
