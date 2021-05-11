#define LED 26

uint8_t daValue=0;
boolean isBright = true;

void setup() {
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
  dacWrite(LED,daValue);
  
  if(isBright){
    daValue++;
  }
  else{
    daValue--;
  }
  
  if(daValue==255||daValue==0){
    isBright = !isBright;
  }
  delay(20);
  
}
