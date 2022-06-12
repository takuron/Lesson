# rtc 电子时钟例子
from machine import Pin, I2C, RTC, Timer
from ssd1306 import SSD1306_I2C


# 定义星期和时间（时分秒）显示字符列表
week = ['Mon', 'Tues', 'Wed', 'Thur', 'Fri', 'Sat', 'Sun']
time_list = ['', '', '']
i2c = I2C(sda=Pin(21), scl=Pin(22)) #I2C 初始化
oled = SSD1306_I2C(128, 64, i2c, addr=0x3c)
rtc = RTC()
if rtc.datetime()[0] != 2020:
    # 年 月 日 星期(0-6) 时 分 秒 微妙
    rtc.datetime((2022, 4, 16, 0, 22, 6, 10, 0))


def RTC_Run(tim):
    datetime = rtc.datetime() # 获取当前时间
    oled.fill(0) # 清屏显示黑色背景
    oled.text('ZUCC', 0, 0) # 首行显示 zucc
    oled.text('RTC Clock', 0, 15) # 次行显示实验名称
    # 显示日期
    datastr = '{:s}-{:s}-{:s} {:s}'.format(str(datetime[0]), str(datetime[1]),
        str(datetime[2]), str(week[datetime[3]]))
    oled.text(datastr, 0, 40)
    timestr = '{:02d}:{:02d}:{:02d}'.format(datetime[4], datetime[5],datetime[6])
    oled.text(timestr, 0, 50)
    oled.show()

tim = Timer(-1)
tim.init(period=300, mode=Timer.PERIODIC, callback=RTC_Run) #周期 300ms

