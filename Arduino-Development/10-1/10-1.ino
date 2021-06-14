#include <Wire.h>
#include "bmp280.h"

#include <Adafruit_GFX.h>    // Core graphics library
#include <Adafruit_ST7735.h> // Hardware-specific library for ST7735
#include <Adafruit_ST7789.h> // Hardware-specific library for ST7789
#include <Adafruit_BMP280.h>
#include <SPI.h>

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

  Serial.begin(9600);

  if (!BMP280Init()) {
    Serial.println(F("Could not find a valid BMP280 sensor, check wiring or "
                      "try a different address!"));
    while (1) delay(10);
  }
}

void loop() {
  tft.fillScreen(ST77XX_BLACK);
  // put your main code here, to run repeatedly:

  tft.setCursor(10, 20);
  tft.setTextColor(ST77XX_WHITE);
  tft.setTextSize(1);
  tft.print("Temperature = ");
  tft.print(BMP280ReadTemperature());
  tft.println(" *C");

  tft.setCursor(10, 30);
  tft.setTextColor(ST77XX_WHITE);
  tft.setTextSize(1);
  tft.print("Pressure = ");
  tft.print(BMP280ReadPressure());
  tft.println(" Pa");

  delay(2000);
}
