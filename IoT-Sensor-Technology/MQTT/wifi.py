import network,time
from machine import Pin

WIFI_LED_PIN = 15

def WIFI_connect(name,password):
    WIFI_LED = Pin(WIFI_LED_PIN,Pin.OUT)

    wlan = network.WLAN(network.STA_IF)
    wlan.active(True)
    start_time = time.time()

    if not wlan.isconnected():
        print("connecting to network~")
        wlan.connect(name,password)

        while not wlan.isconnected():
            WIFI_LED.value(0)
            time.sleep_ms(300)
            WIFI_LED.value(1)
            time.sleep_ms(300)

            if time.time() - start_time >=15:
                print("connected failed.")
                break

        
    if wlan.isconnected():
        WIFI_LED.value(0);
        print("WIFI is connected! info:",wlan.ifconfig())
        return True

    return False


