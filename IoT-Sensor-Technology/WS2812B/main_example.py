from machine import Pin
from neopixel import NeoPixel
import time

pin=Pin(4,Pin.OUT)
#4脚连接灯带
#灯珠数量为1
np = NeoPixel(pin,1)
#定义红、绿、蓝三种颜色
RED=(10,0,)
GREEN=(0,10,0)
BLUE=(0,0,10)
WHITE=(10,10,10)
BLACK=(0,0,0)

np[0] = WHITE
np.write()
time.sleep(2)

np[0] = (0,0,0)
np.write()
time.sleep(2)
