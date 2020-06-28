/**********
* ZUCC Cprograming task
* Author: Takuron@github
**********/

#include <stdio.h>

int main () {
	int n;
	scanf("%d",&n);
	int i;
	double sum = 1; 
	int num = 4;
	for(i=1;i<n;i++){
		sum = pow(-1,i)*(1.0/num)+sum;
		num = num+3;
	}
	printf("sum = %.3f",sum);
	
	return 0;
}
