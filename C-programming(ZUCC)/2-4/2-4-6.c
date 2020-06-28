/**********
* ZUCC Cprograming task
* Author: Takuron@github
**********/

#include <stdio.h>
#include <math.h>

double fact(int n);

int main () {
	int m,n;
	scanf("%d %d",&m,&n);
	
	double re = fact(n)/(fact(m)*fact(n-m));
	
	printf("result = %.0f",re);
}

double fact(n){
	int i2 = 0;
	double ssum = 1;
	while(i2 < n){
		i2++;
		ssum = ssum*i2;
	}
	return ssum;
}
