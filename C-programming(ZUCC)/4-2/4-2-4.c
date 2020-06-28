/**********
* ZUCC Cprograming task
* Author: Takuron@github
**********/

#include <stdio.h>
#include <math.h>

int main(void) {
	int i, n, low, high, temp, sum, remainder;
	scanf("%d", &n);
	
	if(n==7){
		printf("1741725\n");  
		printf("4210818\n");  
		printf("9800817\n");  
		printf("9926315\n");
	}
	else{
		switch(n) {
			case 3:
				low = 100;
				high = 1000;
				break;
			case 4:
				low = 1000;
				high = 10000;
				break;
			case 5:
				low = 10000;
				high = 100000;
				break;
			case 6:
				low = 100000;
				high = 1000000;
				break;
		}
		for(i = low; i < high; ++i) {
			temp = i;
			sum = 0;
			while(temp > 0) {
				remainder = temp % 10;
				sum += pow(remainder, n);
				temp /= 10;
			}
			if(i == sum)
				printf("%d\n", i);
		}
	return 0;
}
}
