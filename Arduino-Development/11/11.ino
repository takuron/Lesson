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

// 引入 wifi 模块，并实例化，不同的芯片这里的依赖可能不同

#include "bmp280.h"
#include <SPI.h>

static WiFiClient espClient;

// 引入阿里云 IoT SDK
#include <AliyunIoTSDK.h>

// 设置产品和设备的信息，从阿里云设备信息里查看
#define PRODUCT_KEY "a1vuPQR65pq"
#define DEVICE_NAME "TestBMP280"
#define DEVICE_SECRET "1515366350427c9d7e8ac59da36efcf7"
#define REGION_ID "cn-shanghai"

// 设置 wifi 信息
#define WIFI_SSID "sgqs24"
#define WIFI_PASSWD "qiuzhen523"

void setup()
{
    Serial.begin(115200);

    if (!BMP280Init()) {
    Serial.println(F("Could not find a valid BMP280 sensor, check wiring or "
                      "try a different address!"));
    while (1) delay(10);
    }
    
    // 初始化 wifi
    wifiInit(WIFI_SSID, WIFI_PASSWD);
    
    // 初始化 iot，需传入 wifi 的 client，和设备产品信息
    AliyunIoTSDK::begin(espClient, PRODUCT_KEY, DEVICE_NAME, DEVICE_SECRET, REGION_ID);
    
}

void loop()
{
    AliyunIoTSDK::loop();
    AliyunIoTSDK::send("temperature", BMP280ReadTemperature());
    AliyunIoTSDK::send("airpressure", BMP280ReadPressure()/100);

    delay(60000);
}

// 初始化 wifi 连接
void wifiInit(const char *ssid, const char *passphrase)
{
    WiFi.mode(WIFI_STA);
    WiFi.begin(ssid, passphrase);
    while (WiFi.status() != WL_CONNECTED)
    {
        delay(1000);
        Serial.println("WiFi not Connect");
    }
    Serial.println("Connected to AP");
}
