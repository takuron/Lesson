from machine import Pin, SoftI2C, ADC, Timer, PWM
from ssd1306 import SSD1306_I2C
from umqtt.simple import MQTTClient
from micropython import const
import time
import wifi

i2c = SoftI2C(scl=Pin(22), sda=Pin(21))
oled = SSD1306_I2C(128, 64, i2c)
adc = ADC(Pin(36))
adc.atten(ADC.ATTN_11DB)
adc.width(ADC.WIDTH_12BIT)

LED_GREEN_PIN = const(16)
green_led = Pin(LED_GREEN_PIN,Pin.OUT,value=1)

WIFI_NAME = "5a410"
PASSWORD = ""

TOPIC = b"/public/TEST/ZUCC_TJZ"
TOPIC_LED = b"/public/TEST/ZUCC_TJZ_LED"

MQTT_SERVER = "mq.tongxinmao.com"
MQTT_PORT = 18830
CLIENT_ID = b"gegtr453er134"

beep = PWM(Pin(19), freq=1000, duty=512)
led_flag = 0
green_led.value(1)

def LED_Callback(topic,msg):
    
    global led_flag
    if led_flag is 0:
        green_led.value(0)
        led_flag = 1
    else:
        green_led.value(1)
        led_flag = 0

def ADC_Test(tim):
    #MQTT刷新
    client.check_msg()

    oled.fill(0)  #  清屏显示黑色背景
    oled.text('ADC Number', 0, 0)  #  首行显示ZUCC
    # 获取 ADC 数值
    oled.text(str(adc.read()), 0, 25)
    oled.text('(4095)', 40, 25)
    # 计算电压值，获得的数据 0-4095 相当于 0-3.3V，（'%.2f'%）表示保留 2 位小数
    msgstr = "{:.2f}".format(adc.read()*3.3/4095)
    oled.text(msgstr, 0, 40)
    oled.text('V', 40, 40)
    
    beep.freq(int(adc.read()*900/4096)+100)

    oled.text(str(beep.freq()), 0, 55)
    oled.text('Hz', 40, 55)

    client.publish(TOPIC,str(adc.read()))
    
    oled.show()# 开启 RTOS 定时器

if wifi.WIFI_connect(WIFI_NAME,PASSWORD):
    client = MQTTClient(CLIENT_ID,MQTT_SERVER,MQTT_PORT)
    client.set_callback(LED_Callback)
    client.connect()
    client.subscribe(TOPIC_LED)
    tim = Timer(-1)
    tim.init(period=300, mode=Timer.PERIODIC, callback=ADC_Test)    # 周期 300ms











