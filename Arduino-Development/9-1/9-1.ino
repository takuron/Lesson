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
  
  tft.fillScreen(ST77XX_BLACK);
  tft.drawFastHLine(0, 64, 160, ST77XX_WHITE);
  tft.drawFastVLine(80, 0, 128, ST77XX_WHITE);
  
  int i;
  for(i=-80;i<81;i++){
    int y = 64-(sin(1.0*i/20))*20;
    tft.drawPixel(i+80,y,ST77XX_BLUE);
  }
}

void loop() {
  // put your main code here, to run repeatedly:

}
