/**********
* ZUCC Cprograming task
* Author: Takuron@github
**********/

#include <stdio.h>

int main () {
	int n,i,j;
	scanf("%d",&n);
	
	char z = 'A';
	
	for(i=n;i>0;i--){
		for (j=0;j<i;j++){
			printf("%c ",z);
			z = z+1;
		}
		printf("\n");
	}
	
	return 0;
}
