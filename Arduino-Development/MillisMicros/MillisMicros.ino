//MillisMicros.ino
unsigned long time1;
unsigned long time2;

void setup(){
  Serial.begin(115200);
}

void loop(){
  time1 = millis();
  time2 = micros();
  //输出系统运行时间
  Serial.print(time1);
  Serial.println("ms");
  Serial.print(time2);
  Serial.println("us");
  delay(1000);
}
