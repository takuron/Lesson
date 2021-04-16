#define S2 35
#define LED 13

boolean ledState = false;

void setup() {
  // put your setup code here, to run once:
  pinMode(S2,INPUT);
  pinMode(LED,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  while(digitalRead(S2)==HIGH);

  if(ledState){
    digitalWrite(LED,HIGH);
  }
  else{
    digitalWrite(LED,LOW);
  }
  ledState = !ledState;
  delay(500);
}
