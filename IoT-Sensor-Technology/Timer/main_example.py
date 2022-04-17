from machine import Timer
from machine import Pin,Signal
from micropython import const
import time

tim = Timer(-1)

LED_RED_PIN = const(17)
LED_GREEN_PIN = const(16)
LED_BLUE_PIN = const(15)

red_led = Pin(LED_RED_PIN,Pin.OUT,value=1)
green_led = Pin(LED_GREEN_PIN,Pin.OUT,value=1)
blue_led = Pin(LED_BLUE_PIN,Pin.OUT,value=1)
LEDS=[red_led,blue_led,green_led]

countt = 0

def change_LED():
    global countt
    countt = countt + 1
    LEDS[countt%3].value(0)
    LEDS[(countt+1)%3].value(1)
    LEDS[(countt+2)%3].value(1)
    

tim.init(period=500,mode=Timer.PERIODIC,callback=lambda t:change_LED())