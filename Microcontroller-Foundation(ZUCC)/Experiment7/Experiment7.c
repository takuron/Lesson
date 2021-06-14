#include <reg52.h>

#define uchar unsigned char
#define uint unsigned int

uchar LEDnumber[] = {0xc0,0xf9,0xa4,0xb0,0x99,0x92,0x82,0xf8,0x80,0x90};

void delay(int n){
	int i,j;
	for(i = 0; i<110;++i)
		{
			for(j = 0; j<n;++j)
				{
      				;
				}
		}

}

void main(){
	uint number;
	P1=0x0f;
	while(1){
		P1=0x0f;
		if(P1!=0x0f){
			delay(50);
			if(P1!=0x0f){
				  if(P1==0x0e) number = 1;
				  if(P1==0x0d) number = 2;
				  if(P1==0x0b) number = 3;
				  if(P1==0x07) number = 4;
				  P1 = 0xf0;
				  if(P1!=0xf0){
				  	if(P1==0xe0) number = number;
					if(P1==0xd0) number = number+4;
					if(P1==0xb0) number = number+8;
					if(P1==0x70) number = number+12;
					if(number>=10) number=9;
				  }
			}
		}
		P2 = LEDnumber[number];
		delay(50);
	}
}	