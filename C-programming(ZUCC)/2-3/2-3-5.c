/**********
* ZUCC Cprograming task
* Author: Takuron@github
**********/

#include <stdio.h>

int main () {
	int lower,upper;
	scanf("%d %d",&lower,&upper);
	
	if(lower > upper){
		printf("Invalid.");
	}
	else if(upper > 100){
		printf("Invalid.");
	}
	else{
		printf("fahr celsius\n");
		int i = lower;
		while(i <= upper){
			printf("%d%6.1f\n",i,5.0*(i-32)/9);
			i++;i++;
		}
	}
	return 0;
}
