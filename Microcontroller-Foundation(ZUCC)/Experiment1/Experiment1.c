#include <reg51.h>

#define uchar unsigned char
#define uint unsigned int

void delay500ms(){

	unsigned char i,j,k;
	for(i=15;i>0;i--)
	for(j=202;j>0;j--)
	for(k=81;k>0;k--);

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
		delay500ms();

		p1s <<= 1;
		p1s ++;
		count ++;
		
	}
}

