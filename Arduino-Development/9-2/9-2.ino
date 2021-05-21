#include <Adafruit_GFX.h>    // Core graphics library
#include <Adafruit_ST7735.h> // Hardware-specific library for ST7735
#include <Adafruit_ST7789.h> // Hardware-specific library for ST7789
#include <SPI.h>

#include <math.h>

#define TFT_CS        32
#define TFT_RST       33 // Or set to -1 and connect to Arduino RESET pin
#define TFT_DC        27
#define TFT_BACKLIGHT 12

Adafruit_ST7735 tft = Adafruit_ST7735(TFT_CS, TFT_DC, TFT_RST);

void setup() {
  // put your setup code here, to run once:
  tft.initR(INITR_BLACKTAB);      // Init ST7735S chip, black tab
  tft.setRotation(3);
  pinMode(TFT_BACKLIGHT, OUTPUT);
  digitalWrite(TFT_BACKLIGHT, HIGH);

  tft.fillScreen(ST77XX_WHITE);
  tft.drawRect(10,22,20,20,ST77XX_BLACK);
  tft.fillRect(50,22,20,20,ST77XX_BLACK);
  
  tft.drawCircle(100,32,10,ST77XX_BLACK);
  tft.fillCircle(140,32,10,ST77XX_BLACK);

  tft.drawRoundRect(10,86,20,20,3,ST77XX_BLACK);
  tft.fillRoundRect(50,86,20,20,3,ST77XX_BLACK);
  
  tft.drawTriangle(90,96,110,86,110,106,ST77XX_BLACK);
  tft.fillTriangle(130,96,150,86,150,106,ST77XX_BLACK);
}

void loop() {
  // put your main code here, to run repeatedly:

}
