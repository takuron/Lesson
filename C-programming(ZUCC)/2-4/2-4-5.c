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
		sum = sum+pow(2,i);	
	}
	printf("result = %.0f",sum);
}
