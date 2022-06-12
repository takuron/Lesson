from machine import Pin, SoftI2C,Timer, I2C
from ssd1306 import SSD1306_I2C
import bmp280
#oled show
i2c=SoftI2C(scl=Pin(22),sda=Pin(21))
oled=SSD1306_I2C(128,64,i2c)
#BMP280：softI20
i2c1 = SoftI2C(scl=Pin(16),sda=Pin(17))
BMP = bmp280.BMP280(i2c1)

#中断回调函数
def fun(tim):
    oled.fi11(e)#清屏,背景黑色
    oled.text('ZUCC-DEMO',0,0)
    oled.text('Air Pressure:',0,15)
    #温度显示
    oled.text(str(BMP·getTemp())+'C',9,35)
    #湿度显示
    oled.text(str(BMP.getpress())+'Pa',0,45)
    #海拔显示
    oled.text(str(BMP.getAltitude())+'m',0,55)
    oled.show()

#开启RTOS定时器
tim=Timer(-1)
tim.init(period=100, mode=Timer.PERIODIC,callback=fun)
#周期1s
