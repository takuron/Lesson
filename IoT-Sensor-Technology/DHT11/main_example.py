from machine import Pin, SoftI2C, Timer
from ssd1306 import SSD1306_I2C
import dht
import time

# oled show
i2c=SoftI2C(scl=Pin(22),sda=Pin(21))
oled = SSD1306_I2C(128,64,i2c)
#创建DTH11对象
d= dht.DHT11(Pin(33))
#传感器连接到引脚33
time.sleep(1)
#首次启动停顿1秒让传感器稳定

def dht_get(tim):
    d.measure()#温湿度采集
    #OLED显示温湿度
    oled.fill(0)#清屏背景黑色
    oled.text('zucc-Demo',0,0)
    oled.text('DHT11test',0,15)
    oled.text(str(d.temperature())+'C',0,40)#温度显示
    oled.text(str(d.humidity())+'%',48,49)#湿度显示
    oled.show()
#开启RTOS定时器,编号为-1,周期2秒
tim= Timer(-1)
tim.init(period=2000,mode=Timer.PERIODIC,callback=dht_get)
