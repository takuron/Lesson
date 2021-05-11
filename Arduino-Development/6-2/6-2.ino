#define LED 13
#define LedLedcChannel 0

uint8_t daValue=0;
boolean isDark = true;

void setup() {
  // put your setup code here, to run once:
  ledcSetup(LedLedcChannel, 2000, 8);
  ledcAttachPin(LED, LedLedcChannel);
}

void loop() {
  // put your main code here, to run repeatedly:
  ledcWrite(LedLedcChannel, daValue);
  
  if(isDark){
    daValue++;
  }
  else{
    daValue--;
  }
  
  if(daValue==255||daValue==0){
    isDark = !isDark;
  }
  delay(20);
}
