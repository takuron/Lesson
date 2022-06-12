from machine import Pin
from micropython import const
import network
import time

WIFI_LED_PIN = const(15)

WIFI_NAME = 'shuaige'
PASS_WORD = 'qiuzhen523'
LED_ON = const(0)
LED_OFF = const(1)


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