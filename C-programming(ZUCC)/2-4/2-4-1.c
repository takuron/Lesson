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
	
	while(i < n+1){
		printf("pow(3,%d) = %.0f\n",i,pow(3,i));
		i++;
	}
}
