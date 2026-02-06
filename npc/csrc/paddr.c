#include <npc.h>
#include <common.h>
#include <paddr.h>
#include <sys/time.h>

u_int8_t pmem[] = {};

uint8_t* guest_to_host(paddr_t addr) { return pmem + (addr - ADDR); } //get the uint8_t addr

static uint64_t get_host_time() {
  struct timeval tv;
  gettimeofday(&tv, NULL);
 
  return (uint64_t)tv.tv_sec * 1000000 + tv.tv_usec;
}

int pmem_read(int raddr) {
  uint32_t addr = (uint32_t)raddr & ~0x3u;

  if (addr == RTC_ADDR) return (uint32_t)get_host_time();
  if (addr == RTC_ADDR + 4) return (uint32_t)(get_host_time() >> 32);

  if (addr < ADDR || addr >= 0x88000000) return 0;

  return *(int *)(guest_to_host(addr)); //change to int* then get the uint32_t addr
}

void pmem_write(int waddr, int wdata, char wmask) {
  uint32_t addr = (uint32_t)waddr & ~0x3u;

  if (addr == SERIAL_PORT) putchar(wdata); //
  
  if (addr < ADDR || addr >= 0x88000000) return;
  uint8_t *pt = guest_to_host(addr);

  for (int i = 0; i < 4; i++) {
    if ((wmask >> i) & 0x1) pt[i] = (uint8_t)((wdata >> (i * 8)) & 0xFF);
  }
}
