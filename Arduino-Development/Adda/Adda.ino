//DA输出0-3.3，AD采样后通过串口显示
//connect GPIO36 to GPIO25
int adPin=36;
int daPin=25;
int adValue;
uint8_t daValue=0;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  dacWrite(daPin,daValue);
  daValue++;
  adValue=analogRead(adPin);
  Serial.print("AD value=");
  Serial.println(adValue);
  delay(100);
}
