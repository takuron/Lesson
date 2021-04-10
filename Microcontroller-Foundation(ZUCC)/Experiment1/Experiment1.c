#include <reg51.h>

#define uchar unsigned char
#define uint unsigned int

void main(){
	uchar nu;
	uint count = 0;
	P1=0xfe;

	while(1){
		if(count>=8){
			P1=0xfe;
			count = 0;
		}
		P1 <<= 1;
		P1 ++;
		count ++;
	}
}