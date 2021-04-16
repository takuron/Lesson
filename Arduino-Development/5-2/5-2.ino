// ArduinoDevelopmentCourse
// Author: takuron@github.com

//使用Metro库来进行非阻塞式定时检查
// https://github.com/thomasfredericks/Metro-Arduino-Wiring

#define S2 35
#define S3 34
#define LED1 13
#define LED2 26

#include <Metro.h>

Metro LEDBright = Metro(1000);//设置快速闪烁的Metro间隔时间为1000
Metro ButtonCheck = Metro(100);//设置检查按钮的间隔为100毫秒

boolean isBright = false;
int lock = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(S2, INPUT);
  pinMode(S3, INPUT);
  pinMode(LED1, OUTPUT);
  pinMode(LED2, OUTPUT);

  digitalWrite(LED1, LOW);
  digitalWrite(LED2, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:

  //如果到达切换时间
  if (LEDBright.check()) {
    if (isBright) {
      digitalWrite(LED1, LOW);
    }
    else {
      digitalWrite(LED1, HIGH);
    }
    isBright = !isBright;
  }

  //如果到达检查时间
  if (ButtonCheck.check()) {
    //且按钮不处于锁定状态,按钮按下
    if (lock == 0&&(digitalRead(S2)==LOW||digitalRead(S3)==LOW)) {

      if (digitalRead(S2)==LOW) {
        LEDBright.interval(3000);
      }
      else if(digitalRead(S3)==LOW) {
        LEDBright.interval(1000);
      }
      lock = 10;//锁定十个循环
    }
    else if(lock>0) {
      lock--;
    }
  }

}
