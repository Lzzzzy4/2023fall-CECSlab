#include <base.h>
#include <dev-mmio.h>

void __timer_init() {
}

void __timer_uptime(DEV_TIMER_UPTIME_T *uptime) {
  // Lab6 TODO: implement uptime MMIO
  // hint: use function `inl` and RTC_ADDR to access RTC MMIO
  uint32_t a = inl(RTC_ADDR);
  uint32_t b = inl(RTC_ADDR + 4);
  uint64_t c = (uint64_t)a | ((uint64_t)b << 32);
  uptime->us = c;
}

void __timer_rtc(DEV_TIMER_RTC_T *rtc) {
  // Lab6 TODO: implement RTC MMIO
  // hint: use function `inl` and RTC_ADDR with offset  to access RTC MMIO
  rtc->second = inl(RTC_ADDR + 8);
  rtc->minute = inl(RTC_ADDR + 12);
  rtc->hour = inl(RTC_ADDR + 16);
  rtc->day = inl(RTC_ADDR + 20);
  rtc->month = inl(RTC_ADDR + 24);
  rtc->year = inl(RTC_ADDR + 28);
}