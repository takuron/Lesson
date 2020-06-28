/**********
* ZUCC Cprograming task
* Author: Takuron@github
**********/

#include <stdio.h>

int main () {
	int n;
	scanf("%d",&n);
	double sum = 1;
	int i = 1;
	int p = 1;
	while(i < n){
		i++;p++;p++;
		sum = sum + 1.0/p ;
	}
	printf("sum = %.6f",sum);
	return 0;
}
