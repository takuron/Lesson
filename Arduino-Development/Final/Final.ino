//计时器库，https://github.com/SofaPirate/Chrono
#include "Chrono.h"

//bmp280传感器，使用独立库
#include "bmp280.h"

//温度与气压
float temp = 25.0;
float pres = 1000.0;

void bmp280Init(){
  if (!BMP280Init()) {
    Serial.println(F("Could not find a valid BMP280 sensor, check wiring or "
                      "try a different address!"));
    while (BMP280Init()) 
      Serial.println(F("Could not find a valid BMP280 sensor, check wiring or "
                      "try a different address!"));
  }

  temp = BMP280ReadTemperature();
  pres = BMP280ReadPressure()/100;
}

//自动更新天气参数
int bmp32UpdaterT = 10*1000;
Chrono bmp32UpdaterC;

void bmp32Updater(){
  if(bmp32UpdaterC.hasPassed(bmp32UpdaterT)){
    bmp32UpdaterC.restart();
    temp = BMP280ReadTemperature();
    pres = BMP280ReadPressure()/100;
  }
}

//阿里云
#include <ETH.h>
#include <WiFi.h>
#include <WiFiAP.h>
#include <WiFiClient.h>
#include <WiFiGeneric.h>
#include <WiFiMulti.h>
#include <WiFiScan.h>
#include <WiFiServer.h>
#include <WiFiSTA.h>
#include <WiFiType.h>
#include <WiFiUdp.h>

static WiFiClient espClient;

#include <AliyunIoTSDK.h>
//阿里云-设置产品和设备的信息
#define PRODUCT_KEY "a1vuPQR65pq"
#define DEVICE_NAME "FinalExam"
#define DEVICE_SECRET "0535d458cc2b1ab39034d01f8cf27eef"
#define REGION_ID "cn-shanghai"

//阿里云-wifi信息
#define WIFI_SSID "shuaige"
#define WIFI_PASSWD "qiuzhen523"

//阿里云-初始化连接
void aliyunInit()
{
    WiFi.mode(WIFI_STA);
    WiFi.begin(WIFI_SSID,WIFI_PASSWD);
    while (WiFi.status() != WL_CONNECTED)
    {
        delay(5000);
        Serial.println("WiFi not Connect");
    }

    AliyunIoTSDK::begin(espClient, PRODUCT_KEY, DEVICE_NAME, DEVICE_SECRET, REGION_ID);
}

//自动上传阿里云
int aliyunUpdateT = 5*60*1000;
Chrono aliyunUpdaterC;

void aliyunUpdater(){
  if(aliyunUpdaterC.hasPassed(aliyunUpdateT)){
    aliyunUpdaterC.restart();
    AliyunIoTSDK::send("temperature", temp);
    AliyunIoTSDK::send("airpressure", pres);
  }
}

//图形显示
#include "img.h"

#include <Adafruit_GFX.h>    // Core graphics library
#include <Adafruit_ST7735.h> // Hardware-specific library for ST7735
#include <Adafruit_ST7789.h> // Hardware-specific library for ST7789
#include <SPI.h>

#define TFT_CS        32
#define TFT_RST       33 // Or set to -1 and connect to Arduino RESET pin
#define TFT_DC        27
#define TFT_BACKLIGHT 12

Adafruit_ST7735 tft = Adafruit_ST7735(TFT_CS, TFT_DC, TFT_RST);

//屏幕当前的显示模式，0为锁屏，1为温度界面，2-3为设置界面
int screenMode=1;
//背景模式，0是根据温度自动判断，1-5是对应图片，6是随机
int bgMode=0;

void screenInit(){
  tft.initR(INITR_BLACKTAB);      // Init ST7735S chip, black tab
  tft.setRotation(3);
  pinMode(TFT_BACKLIGHT, OUTPUT);
  digitalWrite(TFT_BACKLIGHT, HIGH);
}

Chrono screenOffT; 

//无操作30秒关屏幕
void screenoffCheck(){
  if(screenOffT.hasPassed(30*1000)){
    drawScreen(0);
    screenOffT.stop();
  }
}

void drawScreen(int smode){
  screenMode = smode;
  switch(screenMode){
    case 0:
      digitalWrite(TFT_BACKLIGHT, LOW);
    break;
    case 1:
       drawShowScreen();
    break;
    case 2:
      drawsettingbgScreen();
    break;
    case 3:
      drawsettingaliyunScreen();
    break;
  }
}

void drawsettingaliyunScreen(){
  tft.fillScreen(ST77XX_WHITE);
  tft.setCursor(10,20);
  tft.setTextColor(ST77XX_BLACK);
  tft.setTextSize(2);
  tft.println("Settings");
  
  tft.setCursor(10,45);
  tft.setTextSize(1);
  tft.println("Aliyun update time");
  
  tft.setCursor(10,65);
  tft.setTextColor(ST77XX_BLUE);
  switch(aliyunUpdateT){
    case (5*60*1000):
      tft.println("5 minutes");
    break;
    case (30*60*1000):
      tft.println("30 minutes");
    break;
    case (60*60*1000):
      tft.println("1 hour");
    break;
    default:
      tft.println("Customered");
    break;
  }

  tft.setCursor(10,100);
  tft.setTextSize(1);
  tft.setTextColor(ST77XX_BLACK);
  tft.println("Use S2 to change value");

  tft.setCursor(10,110);
  tft.println("Use S3 to change item ");
}

void drawsettingbgScreen(){
  tft.fillScreen(ST77XX_WHITE);
  tft.setCursor(10,20);
  tft.setTextColor(ST77XX_BLACK);
  tft.setTextSize(2);
  tft.println("Settings");
  
  tft.setCursor(10,45);
  tft.setTextSize(1);
  tft.println("Background image setting");
  
  tft.setCursor(10,65);
  tft.setTextColor(ST77XX_BLUE);
  switch(bgMode){
    case 0:
      tft.println("Follow temperature");
    break;
    case 1:
      tft.println("Fixed picture 1");
    break;
    case 2:
      tft.println("Fixed picture 2");
    break;
    case 3:
      tft.println("Fixed picture 3");
    break;
    case 4:
      tft.println("Fixed picture 4");
    break;
    case 5:
      tft.println("Fixed picture 5");
    break;
    case 6:
      tft.println("Random picture");
    break;
  }

  tft.setCursor(10,100);
  tft.setTextSize(1);
  tft.setTextColor(ST77XX_BLACK);
  tft.println("Use S2 to change value");

  tft.setCursor(10,110);
  tft.println("Use S3 to change item ");
  
}

void drawShowScreen(){
  digitalWrite(TFT_BACKLIGHT, HIGH);
  switch(bgMode){
    case 0:
      if(temp>30){
        tft.drawRGBBitmap(0,0,(uint16_t*) gImage_img1,160,128);
       }
       else if(temp>20){
        tft.drawRGBBitmap(0,0,(uint16_t*) gImage_img2,160,128);
       }
       else if(temp>10){
        tft.drawRGBBitmap(0,0,(uint16_t*) gImage_img3,160,128);
       }
       else if(temp>0){
        tft.drawRGBBitmap(0,0,(uint16_t*) gImage_img4,160,128);
       }
       else{
        tft.drawRGBBitmap(0,0,(uint16_t*) gImage_img5,160,128);
       }
    break;
    case 1:
      tft.drawRGBBitmap(0,0,(uint16_t*) gImage_img1,160,128);
    break;
    case 2:
      tft.drawRGBBitmap(0,0,(uint16_t*) gImage_img2,160,128);
    break;
    case 3:
      tft.drawRGBBitmap(0,0,(uint16_t*) gImage_img3,160,128);
    break;
    case 4:
      tft.drawRGBBitmap(0,0,(uint16_t*) gImage_img4,160,128);
    break;
    case 5:
      tft.drawRGBBitmap(0,0,(uint16_t*) gImage_img5,160,128);
    break;
    case 6:
      randomSeed(analogRead(0));
      long p = random(5);
      if(p==0){
        tft.drawRGBBitmap(0,0,(uint16_t*) gImage_img1,160,128);
      }
      else if(p==1){
        tft.drawRGBBitmap(0,0,(uint16_t*) gImage_img2,160,128);
      }
      else if(p==2){
        tft.drawRGBBitmap(0,0,(uint16_t*) gImage_img3,160,128);
      }
      else if(p==3){
        tft.drawRGBBitmap(0,0,(uint16_t*) gImage_img4,160,128);
      }
      else if(p==4){
        tft.drawRGBBitmap(0,0,(uint16_t*) gImage_img5,160,128);
      }
    break;
  }
  tft.setCursor(10,95);
  tft.setTextColor(ST77XX_WHITE);
  tft.setTextSize(2);
  char buf[80]; 
  sprintf(buf,"Temp:%.2f",temp); 
  tft.println(buf);

  tft.setCursor(10,110);
  tft.setTextColor(ST77XX_WHITE);
  tft.setTextSize(1);
  sprintf(buf,"Pressure:%.1f",pres); 
  tft.println(buf);
  
}

//按钮与LED
#define S2 35
#define S3 34
#define LED1 13
#define LED2 26

Chrono buttonCheckT; 

boolean isS2Click = false;
boolean isS3Click = false;

void buttonInit(){
  pinMode(S2, INPUT);
  pinMode(S3, INPUT);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);
  
  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
}

void S2Click(){
  screenOffT.restart();
  switch(screenMode){
    case 0:
      drawScreen(1);
      screenOffT.restart();
    break;
    //在温度界面点击S2会更新并手动上传阿里云
    case 1:
      drawScreen(1);
      AliyunIoTSDK::send("temperature", temp);
      AliyunIoTSDK::send("airpressure", pres);
    break;
    case 2:
      bgMode = (bgMode+1)%7;
      drawScreen(2);
    break;
    case 3:
      switch(aliyunUpdateT){
        case (5*60*1000):
          aliyunUpdateT = 30*60*1000;
        break;
        case (30*60*1000):
          aliyunUpdateT = 60*60*1000;
        break;
        case (60*60*1000):
          aliyunUpdateT = 5*60*1000;
        break;
        default:
          aliyunUpdateT = 5*60*1000;
        break;
      }
      drawScreen(3);
    break;
  }
}

void S3Click(){
  screenOffT.restart();
  switch(screenMode){
    case 0:
      drawScreen(1);
    break;
    case 1:
      drawScreen(2);
    break;
    case 2:
      drawScreen(3);
    break;
    case 3:
      drawScreen(1);
    break;
    
  }
}

void buttonCheck(){
  if(buttonCheckT.hasPassed(20)){
    buttonCheckT.restart();
    //防抖判断
    if(digitalRead(S2)==LOW&&isS2Click ){
      isS2Click = false;
      S2Click();
      buttonCheckT.delay(500);
    }
    else if(digitalRead(S2)==LOW){
      isS2Click = true;
      buttonCheckT.delay(50);
    }
    
    if(digitalRead(S3)==LOW&&isS3Click ){
      isS3Click = false;
      S3Click();
      buttonCheckT.delay(500);
    }
    else if(digitalRead(S3)==LOW){
      isS3Click = true;
      buttonCheckT.delay(50);
    }
  }
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  bmp280Init();
  aliyunInit();
  buttonInit();
  screenInit();
  
  drawScreen(1);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonCheck();
  screenoffCheck();
  aliyunUpdater();
  bmp32Updater();
}
