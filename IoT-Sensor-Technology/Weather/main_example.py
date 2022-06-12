from machine import Pin,SoftI2C
from ssd1306 import SSD1306_I2C
import wifi,time
import urequests
import os
import framebuf
#2C初始化
i2c=SoftI2C(sda=Pin(21),scl=Pin(22))
oled=SSD1306_I2C(128,64,i2c)
WIFI_NAME = "5a410"
PASS_WORD = ""
API_KEY="？？？？？？？？？？" #单个API_KEY并发数有限，请自己申请API_KEY
W_con = wifi.WIFI_connect(WIFI_NAME,PASS_WORD)
time.sleep(1)

# https://docs.seniverse.com/api/start/code.html
#Url = https://api.seniverse.com/v3/weather/now.json？key='+API_KEY +&location=hangzhou&language=zh-Hans&unit=c
url = 'https://api.seniverse.com/v3/weather/now.json?key='+API_KEY+'&location=hangzhou&language=zh-Hans&unit=c'
r = urequests.get(url)
# r.text
city = r.json()['results'][0]['location'] ['name']
temp= r.json()['results'][0]['now'] ['temperature']
weather = r.json()['results'][0]['now'] ['text']
code = int(r.json()['results'][0]['now'] ['code'])
print(city, temp, weather, code)
#打印天气信息到调试区
oled.fil1(0)
oled.text(city,0,0)
oled.text(weather,0,20)
oled.text(str(code),0,30)
oled.show()
time.sleep(2)
