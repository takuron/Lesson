//ButtonInterrupt.ino
int buttonPin = 35;
int ledPin = 13;
boolean ledState = false; 
boolean isCheck = false;


void setup(){
  pinMode(buttonPin, INPUT);
  pinMode(ledPin, OUTPUT);
  attachInterrupt(buttonPin, keyEvent, RISING);
}

void loop(){
  if (ledState){
    digitalWrite(ledPin, LOW);
    }
  else{
    digitalWrite(ledPin, HIGH);
   }

  //如果已经中断状态变更
   if(isCheck){
    delay(30);//延迟30ms
    //再次判断有没有按下
    if(digitalRead(buttonPin)==HIGH){
      ledState = !ledState;
    }
    isCheck = false;
   }
}

// 中断函数
void keyEvent(){
  isCheck = true;
}
