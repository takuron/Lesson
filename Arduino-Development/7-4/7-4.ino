#define adPin 36
#define daPin 25
#define S2 35

#define PrintF 30

boolean isClick = false;
int isCheck = 0;
int adValue;
uint8_t daVoltage=0;
boolean isIncrease = true;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(S2,INPUT);
  attachInterrupt(S2, S2click, RISING);
}

void loop() {
  // put your main code here, to run repeatedly:
  int daValue = daVoltage*256/33;
  dacWrite(daPin,daValue);
  isCheck++;

  if(isCheck>=PrintF){
    adValue = analogRead(adPin);
    Serial.print("AD Voltage=");
    Serial.println(3.3*adValue/4096);
    isCheck=0;
  }

  if(isClick){
    delay(30);
    if(digitalRead(S2)==HIGH){
      if(isIncrease){
        daVoltage++;
      }
      else{
        daVoltage--;
      }

      if(daVoltage==0||daVoltage==33){
        isIncrease = !isIncrease;
      }
    }
    isClick=false;
  }

  delay(10);
}

void S2click(){
  isClick = true;
}
