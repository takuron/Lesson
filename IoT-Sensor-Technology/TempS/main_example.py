from machine import Pin,SoftI2C,Timer
from ssd1306 import SSD1306_I2C
import onewire
import ds18x20

i2c = SoftI2C(scl=Pin(22),sda=Pin(21))
oled = SSD1306_I2C(128,64,i2c)

ow = onewire.OneWire(Pin(33))
ds = ds18x20.DS18X20(ow)
rom = ds.scan()
rom_id = rom[0]
print(rom)