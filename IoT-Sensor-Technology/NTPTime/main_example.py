from machine import Pin,I2C, SoftI2C, RTC, Timer
from micropython import const
import network
import ntptime
from ssd1306 import SSD1306_I2C
import time

WIFI_LED_PIN = const(15)

WIFI_NAME = 'shuaige'
PASS_WORD = 'qiuzhen523'
week = ['Mon', 'Tues', 'Wed', 'Thur', 'Fri', 'Sat', 'Sun']
LED_ON = const(0)
LED_OFF = const(1)

i2c = SoftI2C(scl=Pin(22), sda=Pin(21))
oled = SSD1306_I2C(128, 64, i2c)

# WIFI连接函数
def WIFI_Connect(WIFI_NAME, PASS_WORD):
    WIFI_LED = Pin(WIFI_LED_PIN, Pin.OUT)  # 初始化WIFI指示灯

    wlan = network.WLAN(network.STA_IF)  # STA模式
    wlan.active(True)  # 激活接口
    start_time = time.time()  # 记录时间做超时判断

    if not wlan.isconnected():
        print('connecting to network...')
        wlan.connect(WIFI_NAME, PASS_WORD)  # 输入WIFI账号密码

        while not wlan.isconnected():

            # LED闪烁提示
            WIFI_LED.value(LED_ON)
            time.sleep_ms(300)
            WIFI_LED.value(LED_OFF)
            time.sleep_ms(300)

            # 超时判断,15秒没连接成功判定为超时
            if time.time() - start_time > 15:
                print('WIFI Connected Timeout!')
                break

    if wlan.isconnected():
        # LED点亮
        WIFI_LED.value(LED_ON)
        # 串口打印信息
        print('network information:', wlan.ifconfig())
        return True

    else:
        return False

WIFI_Connect(WIFI_NAME,PASS_WORD)

rtc = RTC()  #rtc init
# 网络授时模块
# ntptime
# host 服务器地址 ntp.aliyun.com
# settime 配置当前时间
# time 时间码
timezone = 8  # 东八区
ntptime.host = 'ntp.aliyun.com'
print("before time: %s" % str(time.localtime()))
ntptime.settime()
print("after time: %s" % str(time.localtime()))
# 配置当前的时间
tampon2 = time.time() + timezone * 3600
# 年 月 日 [0:3]
# 时 分 秒 [3:6]
rtc.datetime(
    time.localtime(tampon2)[0:3] + (0, ) + time.localtime(tampon2)[3:6] +
    (0, ))  #RTC时钟设置


def RTC_Run(tim):
    datetime = rtc.datetime()  # 获取当前时间
    oled.fill(0)  # 清屏显示黑色背景
    oled.text('ZUCC', 0, 0)  # 首行显示 zucc
    oled.text('NTP RTC Clock', 0, 15)  # 次行显示实验名称
    # 显示日期，字符串可以直接用“+”来连接
    datastr = '{:s}-{:s}-{:s} {:s}'.format(str(datetime[0]), str(datetime[1]),
                                           str(datetime[2]),
                                           str(week[datetime[3]]))
    oled.text(datastr, 0, 40)
    timestr = '{:02d}:{:02d}:{:02d}'.format(datetime[4], datetime[5],
                                            datetime[6])
    oled.text(timestr, 0, 50)
    oled.show()


tim = Timer(-1)
tim.init(period=300, mode=Timer.PERIODIC, callback=RTC_Run)  #周期 300ms