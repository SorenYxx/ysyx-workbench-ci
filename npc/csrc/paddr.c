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

  if (addr == RTC_ADDR) { 
    if (g_enable_mtrace) printf("(device)read  0x%08x from 0x%08x\n", (uint32_t)get_host_time(), addr);
    return (uint32_t)get_host_time(); 
  }
  if (addr == RTC_ADDR + 4) {
    if (g_enable_mtrace) printf("(device)read  0x%08x from 0x%08x\n", (uint32_t)(get_host_time() >> 32), addr);
    return (uint32_t)(get_host_time() >> 32);
  }

  if (addr < ADDR || addr >= 0x88000000) return 0;

  if (g_enable_mtrace) printf("read          0x%08x from 0x%08x\n", pmem_read(addr), addr);
  return *(int *)(guest_to_host(addr)); //change to int* then get the uint32_t addr
}

void pmem_write(int waddr, int wdata, char wmask) {
  uint32_t addr = (uint32_t)waddr & ~0x3u;

  if (addr == SERIAL_PORT) {
    putchar(wdata);
    if (g_enable_mtrace) printf("(device)write 0x%08x to   0x%08x\n", wdata, addr);
  }

  if (addr < ADDR || addr >= 0x88000000) return;
  uint8_t *pt = guest_to_host(addr);

  for (int i = 0; i < 4; i++) {
    if ((wmask >> i) & 0x1) pt[i] = (uint8_t)((wdata >> (i * 8)) & 0xFF);
  }
  if (g_enable_mtrace) printf("write         0x%08x to   0x%08x\n", wdata, addr);
}

// csr
int csr_read(int addr) {
  switch (addr) {
    case 0x300: return cpu_n.mstatus;
    case 0x305: return cpu_n.mtvec;
    case 0x341: return cpu_n.mepc;
    case 0x342: return cpu_n.mcause;
    default: Log("Read unsupported csr addr = 0x%03x", addr); assert(0);
  }
}

void csr_write(int addr, int data) {
  switch (addr) {
    case 0x300: cpu_n.mstatus = data; return;
    case 0x305: cpu_n.mtvec = data; return;
    case 0x341: cpu_n.mepc = data; return;
    case 0x342: cpu_n.mcause = data; return;
    default: Log("Write unsupported csr addr = 0x%03x", addr); assert(0);
  }
}
