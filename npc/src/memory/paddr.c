#include <npc.h>
#include <common.h>
#include <paddr.h>
#include <device/mmio.h>
#include <device/map.h>

#define PMEM_TOTAL_SIZE \
  (CONFIG_PSRAM_SIZE + CONFIG_MROM_SIZE + CONFIG_SRAM_SIZE + CONFIG_SDRAM_SIZE)

uint8_t pmem[PMEM_TOTAL_SIZE] = {};
uint8_t flash[CONFIG_Flash_SIZE] = {};

const mem_region_t mem_regions[MEM_REGION_NUM] = {
  { .base = CONFIG_PSRAM_BASE, .size = CONFIG_PSRAM_SIZE, .offset = 0 },
  { .base = CONFIG_MROM_BASE,  .size = CONFIG_MROM_SIZE,  .offset = CONFIG_PSRAM_SIZE },
  { .base = CONFIG_SRAM_BASE,  .size = CONFIG_SRAM_SIZE,  .offset = CONFIG_PSRAM_SIZE + CONFIG_MROM_SIZE },
  { .base = CONFIG_SDRAM_BASE, .size = CONFIG_SDRAM_SIZE, .offset = CONFIG_PSRAM_SIZE + CONFIG_MROM_SIZE + CONFIG_SRAM_SIZE },
};

static inline const mem_region_t* find_region(paddr_t addr) {
  for (int i = 0; i < MEM_REGION_NUM; i++) {
    if (addr >= mem_regions[i].base && addr < mem_regions[i].base + mem_regions[i].size)
      return &mem_regions[i];
  }
  return NULL;
}

uint8_t* guest_to_host(paddr_t addr) {
  const mem_region_t *r = find_region(addr);
  return r ? pmem + r->offset + (addr - r->base) : NULL;
}

uint8_t* guest_to_flash(paddr_t addr) { return flash + (addr - CONFIG_Flash_BASE); }

// ----- Read -----
int pmem_read(int raddr) {
  uint32_t addr = (uint32_t)raddr & ~0x3u;

  const mem_region_t *r = find_region(addr);
  if (r) {
    int value = *(int *)(pmem + r->offset + (addr - r->base));
#ifdef CONFIG_MTRACE
    printf("read          0x%08x from 0x%08x\n", value, addr);
#endif
    return value;
  }
#ifdef CONFIG_DEVICE
  {
    word_t ret = mmio_read(addr, 4);
    return (int)ret;
  }
#endif

  return 0;
}

extern "C" void mrom_read(int32_t addr, int32_t *data) {
  uint32_t addr32 = (uint32_t)addr & ~0x3u;

  const mem_region_t *r = find_region(addr32);
  if (r) {
    *data = *(int *)(pmem + r->offset + (addr32 - r->base));
#ifdef CONFIG_MTRACE                                                                                                                                                                                                                                                                                                                                                                                               
    printf("[mrom]read          0x%08x from 0x%08x\n", *data, addr32);                                                                                                                                                                                                                                                                                                                                             
#endif
  }
}

extern "C" void flash_read(int32_t addr, int32_t *data) {
  uint32_t addr32 = ((uint32_t)addr & ~0x3u);

  if (addr32 < CONFIG_Flash_SIZE) {
    *data = *(int32_t *)(flash + addr32);
#ifdef CONFIG_MTRACE
    printf("[flash]read         0x%08x from 0x%08x\n", *data, addr32);
#endif
  }
}

// -----------------

// ----- Write -----
void pmem_write(int waddr, int wdata, int wmask) {
  uint32_t addr = (uint32_t)waddr & ~0x3u;

  const mem_region_t *r = find_region(addr);
  if (r) {
    uint8_t *pt = pmem + r->offset + (addr - r->base);
    for (int i = 0; i < 4; i++) {
      if ((wmask >> i) & 0x1) pt[i] = (uint8_t)((wdata >> (i * 8)) & 0xFF);
    }
#ifdef CONFIG_MTRACE
    printf("write         0x%08x to   0x%08x\n", wdata, addr);
#endif
    return;
  }

#ifdef CONFIG_DEVICE
  mmio_write(addr, 4, wdata);
  return;
#endif
}
// -----------------