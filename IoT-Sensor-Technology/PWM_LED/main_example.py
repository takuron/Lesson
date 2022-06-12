# 灯会慢慢点亮
from machine import Pin, PWM
import time

blue = PWM(Pin(15), freq=1000, duty=1023)
for i in range(255):
    print(i)
    blue.duty((255 - i) * 4)
    time.sleep_ms(100)
blue.deinit()
