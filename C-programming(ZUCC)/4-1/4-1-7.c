/**********
* ZUCC Cprograming task
* Author: Takuron@github
**********/

#include <stdio.h>
#include <math.h>

int main () {
	int a,n,i;
	double sum = 0 ;
	scanf("%d %d",&a,&n);
	
	for(i=1;i<=n;i++){
		sum = sum + (pow(10,(i-1))*(a*(n-i+1)));
	}
	
	printf("s = %.0f",sum);
	
	return 0;
}
