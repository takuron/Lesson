#define LED 26

int level=0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:

  dacWrite(LED,level*255/9);
  
  if (Serial.available() > 0){
    char input = Serial.read();
    if(input>='0'&&input<='9'){
      level = input-'0';
      Serial.println("Success");
    }
  }
}
