#include <am.h>

#define RTC_ADDR 0x10000048

// CLINT 模块的时钟频率 (Hz)
// 在 Verilator 仿真环境中没有主频概念，此值应设为仿真的有效频率（每秒周期数）
// 在真实 FPGA/ASIC 上，此值应设为实际时钟频率
// 可通过编译选项覆盖：-DCPU_FREQ_HZ=50000000
#ifndef CPU_FREQ_HZ
#define CPU_FREQ_HZ 100000  // 默认 100kHz（Verilator 仿真）
#endif

void __am_timer_init() {
}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
  uint32_t high = *(volatile uint32_t *)(RTC_ADDR + 4);
  uint32_t low  = *(volatile uint32_t *)(RTC_ADDR + 0);

  uint64_t mtime = ((uint64_t)high << 32) | low;
  uptime->us = mtime * 1000000ULL / CPU_FREQ_HZ;
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour   = 0;
  rtc->day    = 0;
  rtc->month  = 0;
  rtc->year   = 1900;
}
