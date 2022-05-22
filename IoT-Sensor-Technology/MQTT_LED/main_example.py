from umqtt.simple import MQTTClient
from machine import Pin,Timer
from micropython import const
import wifi
import time
import machine,ubinascii

LED_RED_PIN = const(17)
red_led = Pin(LED_RED_PIN,Pin.OUT,value=1)

WIFI_NAME = "5a410"
PASSWORD = ""

TOPIC = b"/zucctjz/msgtest"
MSG = "Hello,Python!"

MQTT_SERVER = "mq.tongxinmao.com"
MQTT_PORT = 18830
CLIENT_ID = ubinascii.hexlify(machine.unique_id())

def timer(tim):
    client.check_msg()

def callback(topic,msg):
    if msg.decode("utf-8") is "on":
        red_led.value(0)
    elif msg.decode("utf-8") is "off":
        red_led.value(1)

print(CLIENT_ID)
if wifi.WIFI_connect(WIFI_NAME,PASSWORD):
    client = MQTTClient(CLIENT_ID,MQTT_SERVER,MQTT_PORT)
    client.set_callback(callback)
    client.connect()
    client.subscribe(TOPIC)

    tim = Timer(-1)
    tim.init(period=500,mode=Timer.PERIODIC,callback=timer)
