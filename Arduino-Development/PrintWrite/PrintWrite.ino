//PrintWrite.ino
float FLOAT = 1.23456;
int INT = 123;
byte BYTE[6] = {48, 49, 50, 51, 52, 53};

void setup(){
  Serial.begin(115200);
  //Print的各种输出形式
  Serial.println("Serial Print:");
  Serial.println(INT);
  Serial.println(INT, BIN);
  Serial.println(INT, OCT);
  Serial.println(INT, DEC);
  Serial.println(INT, HEX);
  Serial.println(FLOAT);
  Serial.println(FLOAT, 0);
  Serial.println(FLOAT, 2);
  Serial.println(FLOAT, 4);
  Serial.printf("\n");
  Serial.printf("Serial prinf\n");
  Serial.printf("%d\n",INT);
  Serial.printf("%#o\n",INT);
  Serial.printf("%#x\n",INT);
  Serial.printf("%f\n",FLOAT);
  //Write的各种输出形式
  Serial.println();
  Serial.println("Serial Write:");
  Serial.write(INT);
  Serial.println();
  Serial.write("Serial");
  Serial.println();
  Serial.write(BYTE, 6);
}
void loop()
{
}
