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
		i++;p++;p++;
		sum = sum - pow(-1,i)*i/p ;
	}
	printf("%.3f",sum);
	return 0;
}
