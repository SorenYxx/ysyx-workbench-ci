#include <am.h>
#include "ysyxsoc.h"

static uint64_t bool_time = 0;

static uint64_t read_time() {
  uint32_t high = *(volatile uint32_t *)(RTC_ADDR + 4);
  uint32_t low  = *(volatile uint32_t *)(RTC_ADDR + 0);
  return ((uint64_t)high << 32) | low;
}

void __am_timer_init() {
  bool_time = read_time();
}

void __am_timer_uptime(AM_TIMER_UPTIME_T *uptime) {
  uint64_t now = read_time();
  uptime->us = now - bool_time;
}

void __am_timer_rtc(AM_TIMER_RTC_T *rtc) {
  rtc->second = 0;
  rtc->minute = 0;
  rtc->hour   = 0;
  rtc->day    = 0;
  rtc->month  = 0;
  rtc->year   = 1900;
}
