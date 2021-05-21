#include <reg52.h>

#define uchar unsigned char
#define uint unsigned int

uchar LEDnumber[] = {0xc0,0xf9,0xa4,0xb0,0x99,0x92,0x82,0xf8,0x80,0x90};

uchar LED;
uint num;

int main(){
	num = 0;
	LED = LEDnumber[0];
	
	IT0 = 0;
	EX0=1;
	EA =1;

	while(1) P0 = LED;
}

void click(void) interrupt 0 {
	num++;
	if(num<=9){
		LED = LEDnumber[num];
	}
	else{
		num = 0;
		LED = LEDnumber[num];
	}
}