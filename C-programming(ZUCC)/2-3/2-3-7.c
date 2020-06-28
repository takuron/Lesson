/**********
* ZUCC Cprograming task
* Author: Takuron@github
**********/

#include <stdio.h>

int main () {
	int m,n;
	scanf("%d %d",&m,&n);
	double sum = 0;
	
	int i = m;
	while(i <= n){
		double p = i*i+1.0/i;
		sum = sum + p ;
		i++;
	}
	printf("sum = %.6f",sum);
	return 0;
}
