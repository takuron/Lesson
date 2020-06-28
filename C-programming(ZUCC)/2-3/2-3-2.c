/**********
* ZUCC Cprograming task
* Author: Takuron@github
**********/

#include <stdio.h>

int main () {
	int n;
	scanf("%d",&n);
	double sum = 0;
	int i = 0;
	while(i < n){
		i++;
		sum = sum + 1.0/i ;
	}
	printf("sum = %.6f",sum);
	return 0;
}
