from machine import Pin, SoftI2C, ADC, Timer
from ssd1306 import SSD1306_I2C

i2c = SoftI2C(scl=Pin(22), sda=Pin(21))
oled = SSD1306_I2C(128, 64, i2c)
adc = ADC(Pin(32))
adc.atten(ADC.ATTN_11DB)
adc.width(ADC.WIDTH_12BIT)

def ADC_Test(tim):
    oled.fill(0)  #  清屏显示黑色背景
    oled.text('Demo', 0, 0)  #  首行显示ZUCC
    oled.text('ADC', 0, 15)  #  次行显示实验名称
    # 获取 ADC 数值
    oled.text(str(adc.read()), 0, 40)
    oled.text('(4095)', 40, 40)
    # 计算电压值，获得的数据 0-4095 相当于 0-3.3V，（'%.2f'%）表示保留 2 位小数
    msgstr = "{:.2f}".format(adc.read()*3.3/4095)
    oled.text(msgstr, 0, 55)
    oled.text('V', 40, 55)
    oled.show()# 开启 RTOS 定时器

tim = Timer(-1)
tim.init(period=300, mode=Timer.PERIODIC, callback=ADC_Test)    # 周期 300ms
