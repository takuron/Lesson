/**********
* ZUCC Cprograming task
* Author: Takuron@github
**********/

#include <stdio.h>

int fac(int n);

int main () {
	int n,i;
	double sum=1;
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		sum = sum + (1.0/fac(i));
	}
	printf("%.8lf",sum);
	
	return 0;
}

int fac (int n){
	int i = 0;
	double sum = 1;
	for(i=1;i<=n;i++){
		sum = sum * i;
	}
	return sum;
} 
