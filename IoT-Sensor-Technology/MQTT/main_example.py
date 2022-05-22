from umqtt.simple import MQTTClient
from machine import Pin,Timer
import wifi
import time
import machine,ubinascii

WIFI_NAME = "5a410"
PASSWORD = ""

TOPIC = b"/zucctjz/msgtest"
MSG = "Hello,Python!"

MQTT_SERVER = "mq.tongxinmao.com"
MQTT_PORT = 18830
CLIENT_ID = b"gegtr453er134"

def timer(tim):
    #client.publish(TOPIC,MSG)
    client.check_msg()

def callback(topic,msg):
    print("topic:{},msg:{}".format(topic,msg))

print(CLIENT_ID)
if wifi.WIFI_connect(WIFI_NAME,PASSWORD):
    client = MQTTClient(CLIENT_ID,MQTT_SERVER,MQTT_PORT)
    client.set_callback(callback)
    client.connect()
    client.subscribe(TOPIC)

    tim = Timer(-1)
    tim.init(period=1000,mode=Timer.PERIODIC,callback=timer)

