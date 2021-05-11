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
	  uchar LED = 0x00;
	  uint i = 0;
	  while(1){
	  	  LED = LEDnumber[i];
		  P0 = LED;
		  delay(200);

		  i++;
		  if(i>=10) i=0;
	  }
}