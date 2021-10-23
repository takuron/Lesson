MEMORY
{
  iram0_0_seg (RX) : org = 0x40080000, len = 0x20000
  iram0_2_seg (RX) : org = 0x400D0018, len = 0x330000-0x18
  dram0_0_seg (RW) : org = 0x3FFB0000 + 0x10000,
                                     len = 0x50000 - 0x0 - 0x10000
  drom0_0_seg (R) : org = 0x3F400018, len = 0x400000-0x18
  rtc_iram_seg(RWX) : org = 0x400C0000, len = 0x2000
  rtc_slow_seg(RW) : org = 0x50000000 + 0,
                                     len = 0x1000 - 0
}
_heap_end = 0x40000000 - 0x0;
_heap_size = 0x3FFE0000 - _heap_start;
