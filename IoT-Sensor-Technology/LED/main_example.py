from machine import Pin,Signal
from micropython import const
import time

LED_RED_PIN = const(17)
LED_GREEN_PIN = const(16)
LED_BLUE_PIN = const(15)

red_led = Pin(LED_RED_PIN,Pin.OUT,value=1)
green_led = Pin(LED_GREEN_PIN,Pin.OUT,value=1)
blue_led = Pin(LED_BLUE_PIN,Pin.OUT,value=1)

while True:
    red_led.value(0)
    blue_led.value(1)
    green_led.value(1)
    time.sleep(1)

    red_led.value(1)
    blue_led.value(0)
    green_led.value(1)
    time.sleep(1)

    red_led.value(1)
    blue_led.value(1)
    green_led.value(0)
    time.sleep(1)



