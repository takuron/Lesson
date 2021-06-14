#include <reg52.h>

#define uchar unsigned char
#define uint unsigned int

uint time;
uint led;\

sbit P1_0=P1^0;

int main(){
	//分100个10ms实现
	TMOD = 0x01;
	TH0 = (65536-10000)/256;
	TL0 = (65536-10000)%256;
	EA = 1;
	ET0 = 1;
	TR0 = 1;

	time = 0;
	led = 0;
	
	while(1){
		P1_0 = led;	
	}

	return 0;
}

void LED_change() interrupt 1 {
	TR0=0;

	time++;
	if(time>=100){
		  led = !led;
		  time = 0;
	}

	TH0 = (65536-10000)/256;
	TL0 = (65536-10000)%256;
	TR0 = 1;
}
