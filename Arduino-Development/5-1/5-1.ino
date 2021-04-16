#define S2 35
#define S3 34
#define LED1 13
#define LED2 26

boolean led1State = false;
boolean led2State = false;

void setup() {
  // put your setup code here, to run once:
  pinMode(S2,INPUT);
  pinMode(S3,INPUT);
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);

  digitalWrite(LED1,LOW);
  digitalWrite(LED2,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  while(digitalRead(S2)==HIGH&&digitalRead(S3)==HIGH);

  if(digitalRead(S3)==HIGH){
    if(led1State){
      digitalWrite(LED1,HIGH);
    }
    else{
      digitalWrite(LED1,LOW);
    }
    led1State = !led1State;
  }

  if(digitalRead(S2)==HIGH){
    if(led2State){
      digitalWrite(LED2,HIGH);
    }
    else{
      digitalWrite(LED2,LOW);
    }
    led2State = !led2State;
  }
  delay(500);
}
