#define adPin 36
#define daPin 25
#define S2 35

#define PrintF 3

int isCheck = 0;
int adValue;
uint8_t daVoltage=0;
boolean lock = false;
boolean isIncrease = true;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(S2,INPUT);
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
  }

  if(digitalRead(S2)==LOW&&!lock){
    if(isIncrease){
      daVoltage++;
    }
    else{
      daVoltage--;
    }

    if(daVoltage==0||daVoltage==33){
      isIncrease = !isIncrease;
    }
    
    lock = true;
  }

  if(digitalRead(S2)==HIGH){
    lock = false;
  }

  delay(100);
}
