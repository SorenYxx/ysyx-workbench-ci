#include <npc.h>
#include <common.h>
#include <paddr.h>
#include <device/mmio.h>
#include <device/map.h>

#define PMEM_TOTAL_SIZE \
  (CONFIG_PSRAM_SIZE + CONFIG_MROM_SIZE + CONFIG_SRAM_SIZE + CONFIG_SDRAM_SIZE)

uint8_t pmem[PMEM_TOTAL_SIZE] = {};
uint8_t flash[CONFIG_FLASH_SIZE] = {};

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

uint8_t* guest_to_flash(paddr_t addr) { return flash + (addr - CONFIG_FLASH_BASE); }

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

  if (addr32 < CONFIG_FLASH_SIZE) {
    *data = *(int32_t *)(flash + addr32);
    // 追踪 app 拷贝区段(0x300000a0 起)的读, 看 XIP 控制器请求的地址
    if (addr32 >= 0x1a0 && addr32 < 0x2f0) {
      printf("[flash]read addr=0x%08x data=0x%08x\n", addr32, *data);
    }
  }
}

extern "C" void psram_read(int32_t addr, int32_t *data) {
  uint32_t addr32 = ((uint32_t)addr & ~0x3u);

  const mem_region_t *r = find_region(addr32);
  if (r) {
    *data = *(int *)(pmem + r->offset + (addr32 - r->base));
#ifdef CONFIG_MTRACE
    printf("[psram]read         0x%08x from 0x%08x\n", *data, addr32);
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
    IFDEF(CONFIG_MTRACE, printf("write         0x%08x to   0x%08x\n", wdata, addr));
    return;
  }

#ifdef CONFIG_DEVICE
  mmio_write(addr, 4, wdata);
  return;
#endif
}

extern "C" void psram_write(int32_t addr, int32_t *data, int32_t *wmask) {
  uint32_t addr32 = ((uint32_t)addr & ~0x3u);

  const mem_region_t *r = find_region(addr32);
  if (r) {
    uint8_t *pt = pmem + r->offset + (addr32 - r->base);
    for (int i = 0; i < 4; i++) {
      if ((wmask[0] >> i) & 0x1) pt[i] = (uint8_t)((data[0] >> (i * 8)) & 0xFF);
    }
    IFDEF(CONFIG_MTRACE, printf("[psram]write        0x%08x to   0x%08x\n", data[0], addr32));
  }
}

// SDRAM 模型 (sdram.v) 的读写追踪: 只追踪 0xa0000120 处指令(word 0x90/0x91)
extern "C" void sdram_trace(int addr, int data, int is_write) {
  if (addr == 0x90 || addr == 0x91) {
    printf("[sdram]%s word=0x%06x data=0x%04x byte=0x%08x\n",
           is_write ? "W" : "R", addr, data & 0xffff, 0xa0000000 + (addr << 1));
  }
}
// -----------------