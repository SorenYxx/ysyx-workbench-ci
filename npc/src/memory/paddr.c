#include <npc.h>
#include <common.h>
#include <paddr.h>
#include <device/mmio.h>
#include <device/map.h>

u_int8_t pmem[] = {};

uint8_t* guest_to_host(paddr_t addr) { return pmem + (addr - ADDR); }

static inline bool in_pmem(paddr_t addr) {
  return addr >= ADDR && addr < ADDR + MSB;
}

int pmem_read(int raddr) {
  uint32_t addr = (uint32_t)raddr & ~0x3u;

  if (in_pmem(addr)) {
    int value = *(int *)(guest_to_host(addr));
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

void pmem_write(int waddr, int wdata, int wmask) {
  uint32_t addr = (uint32_t)waddr & ~0x3u;

  if (in_pmem(addr)) {
    uint8_t *pt = guest_to_host(addr);
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

extern "C" void flash_read(int32_t addr, int32_t *data) { assert(0); }
extern "C" void mrom_read(int32_t addr, int32_t *data) { assert(0); }
