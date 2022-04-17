from machine import Pin, I2C, SoftI2C
from ssd1306 import SSD1306_I2C
i2c = SoftI2C(scl=Pin(22), sda=Pin(21))
# i2c = I2C(1, scl=Pin(22), sda=Pin(21))  # 使用硬件I2C
oled = SSD1306_I2C(128, 64, i2c)
# x 代表列 y 代表行 先列 后行
oled.fill(0)  # 相当于清除屏幕
oled.text('Hello', 0, 0)
oled.text('World', 0, 10)

# oled.fill(1)  #全部点亮oled
# oled.pixel(10, 20, 1)  # 显示一个点
# oled.line(10, 20, 60, 60, 1)  # 绘制一条直线
# oled.rect(10, 20, 20, 20, 1)  # 绘制一个矩形框
# oled.fill_rect(30, 30, 30, 10, 1)  # 绘制一个矩形框并填充
# oled.hline(50, 50, 50, 1)  # 绘制一个水平条
# oled.vline(40, 60, 10, 1)  # 绘制一个垂直条

oled.show()