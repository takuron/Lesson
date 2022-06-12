from HCSR04 import HCSR04
from machine import Pin, SoftI2C, Timer
from ssd1306 import SSD1306_I2C

# oled show
i2c=SoftI2C(scl=Pin(22),sda=Pin(21))
oled=SSD1306_I2C(128,64,i2c)

#初始化接口trig=4,echo=15
trig=Pin(4,Pin.OUT)
echo=Pin(15,Pin.IN)
HC = HCSR04(trig,echo)

#中断回调函数
def fun(tim):
    oled.fill(0)#清屏,背景黑色
    oled.text('Zucc',0,6)
    oled.text('Distance test:',0,15)
    Distance=HC.getDistance()#测量距离
    #OLED显示距离
    oled.text(str(Distance)+'CM',8,35)
    oled.show()
    #串口打印
    print(str(Distance) +'CM')
#开启RTOS定时器
tim = Timer(-1)
#周期1s
tim.init(period=100,mode=Timer.PERIODIC,callback=fun)

