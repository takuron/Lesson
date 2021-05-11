#include <reg51.h>

#define uchar unsigned char
#define uint unsigned int

void delay(){
	int i,j;
	for(i = 0; i<110;++i)
		{
			for(j = 0; j<1000;++j)
				{
      				;
				}
		}

}

void main(){
	uchar nu;
	uint count = 0;
	uchar p1s = 0xfe;
	P1=p1s;

	while(1){
		if(count>=8){
			p1s=0xfe;
			count = 0;
		}
		P1 = p1s;
		delay();

		p1s <<= 1;
		p1s ++;
		count ++;
		
	}
}

