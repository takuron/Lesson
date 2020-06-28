/**********
* ZUCC Cprograming task
* Author: Takuron@github
**********/

#include <stdio.h>
#include <math.h>

int main () {
	int n;
	scanf("%d",&n);
	int i = 0;
	double sum = 0;
	
	while(i < n){
		i++;
		sum = sum+sqrt(i);	
	}
	printf("sum = %.2f",sum);
}
