from machine import Pin,Signal
from micropython import const
import time      

KEY1_PIN = const(34)
KEY2_PIN = const(35)

LED_RED_PIN = const(17)
LED_GREEN_PIN = const(16)
LED_BLUE_PIN = const(15)

Key1 = Pin(KEY1_PIN,Pin.IN,Pin.PULL_UP)

Red_led = Pin(LED_RED_PIN,Pin.OUT,value=1)
Green_led = Pin(LED_GREEN_PIN,Pin.OUT,value=1)
Blue_led = Pin(LED_BLUE_PIN,Pin.OUT,value=1)

Red_led_s = Signal(Red_led,invert=True);
Green_led_s = Signal(Green_led,invert=True);
Blue_led_s = Signal(Blue_led,invert=True);

White_led_s = [Red_led_s,Green_led_s,Blue_led_s]

led_state = 0

def change_LED() :
    global led_state
    if led_state is 0:
        led_state = 1
        for led in White_led_s:
            led.on()
    else :
        led_state = 0
        for led in White_led_s:
            led.off()


def onClick(KEY):
    time.sleep_ms(10)
    if Key1.value() is 0:
        change_LED()

Key1.irq(onClick,Pin.IRQ_FALLING)