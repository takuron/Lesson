from machine import Pin, SoftI2C, Timer
from ssd1306 import SSD1306_I2C
import onewire
import ds18x20

#oled show
i2c=SoftI2C(scl=Pin(22),sda=Pin(21))
oled = SSD1306_I2C(128,64,i2c)
#初始化DS18B29
ow=onewire.OneWire(Pin(33))#使能单总线
ds=ds18x20.DS18X20(ow)#传感器是DS18B20
rom=ds.scan()#扫描单总线上的传感器地址,支持多个传感器同时连接
rom_id=rom[0]#获取第一个ROM的ID
print(rom_id)#显示该ID

def temp_get(tim):
    ds.convert_temp()
    #温度显示,rom[a]为第1个DS18B29
    temp = ds.read_temp(rom[0])
    #OLED数据显示
    oled.fill(0)#清屏背景黑色
    oled.text('ZUCC-Demo',0,9)
    oled.text('Temp test:',0,20)
    #显示temp,保留2位小数
    oled.text(str('%.2f'%temp)+'C',0,40)
    oled.show()

#开启RTOS定时器,编号为-1
tim=Timer(-1)
#定时器周期为299ems
tim.init(period=2000,mode=Timer.PERIODIC,callback=temp_get)
