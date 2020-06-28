/**********
* ZUCC Cprograming task
* Author: Takuron@github
**********/

#include <stdio.h>

int main () {
	int n,i,nu,min;
	
	scanf("%d",&n);
	scanf("%d",&min);
	
	for (i=1;i<n;i++){
		scanf("%d",&nu);
		if(nu<=min){
			min=nu;
		}
	}
	
	printf("min = %d",min);
	
	return 0;
}
