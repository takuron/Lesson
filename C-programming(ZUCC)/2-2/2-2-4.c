/**********
* ZUCC Cprograming task
* Author: Takuron@github
**********/

#include <stdio.h>

int main () {
	int a,b,c,d;
	scanf("%d %d %d %d",&a,&b,&c,&d);
	int sum = a+b+c+d;
	float ave = (float)sum/4;
	printf("Sum = %d; Average = %.1f",sum,ave);
	return 0;
}
