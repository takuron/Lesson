#include <reg52.h>

#define uchar unsigned char
#define uint unsigned int

uint isClick = 1;

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

int main(){
   IT0 = 1;
   EX0 = 1;
   EA = 1;
   while(1){
   	 if(isClick == 1){
	 	uchar nu;
		uint count = 0;
		uchar p1s = 0xfe;
		P1=p1s;

		while(count<8){
			P1 = p1s;
			delay();

			p1s <<= 1;
			p1s ++;
			count ++;
		
		}

		isClick = 0;
	 }
   }
}

void click(void) interrupt 0 {
	EX0 = 0;
	isClick = 1;
	EX0 = 1;
}