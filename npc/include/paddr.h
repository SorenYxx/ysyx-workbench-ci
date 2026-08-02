#ifndef __MEMORY_PADDR_H__
#define __MEMORY_PADDR_H__

#include <common.h>

//MEM -- defined via Kconfig (autoconf.h), fallback defaults for IDE
#ifndef CONFIG_PSRAM_BASE
#define CONFIG_PSRAM_BASE 0x80000000
#define CONFIG_PSRAM_SIZE 0x20000000
#define CONFIG_MROM_BASE  0x20000000
#define CONFIG_MROM_SIZE  0x1000
#define CONFIG_SRAM_BASE  0x0f000000
#define CONFIG_SRAM_SIZE  0x01000000
#define CONFIG_Flash_BASE 0x30000000
#define CONFIG_Flash_SIZE 0x10000000
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

#define PMEM_LEFT  ((paddr_t)CONFIG_MBASE)
#define PMEM_RIGHT ((paddr_t)CONFIG_MBASE + CONFIG_MSIZE - 1)
#define RESET_VECTOR (PMEM_LEFT + CONFIG_PC_RESET_OFFSET)

uint8_t* guest_to_host(paddr_t paddr);
uint8_t* guest_to_flash(paddr_t paddr);

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
