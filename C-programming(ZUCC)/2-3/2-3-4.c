/**********
* ZUCC Cprograming task
* Author: Takuron@github
**********/

#include <stdio.h>
#include <math.h>

int main () {
	int n;
	scanf("%d",&n);
	double sum = 1;
	int i = 1;
	int p = 1;
	while(i < n){
		p++;p++;p++;
		sum = sum + pow(-1,i)*1.0/p ;
		i++;
	}
	printf("sum = %.3f",sum);
	return 0;
}
