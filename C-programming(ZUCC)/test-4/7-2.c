/**********
* ZUCC Cprograming task
* Author: Takuron@github
**********/

#include <stdio.h>

int main () {
	int n,i;
	scanf("%d",&n);
	
	int peach = 1;
	
	for(i=0;i<n-1;i++){
		peach = (peach+1)*2;
	}
	
	printf("%d",peach);
	
	return 0;
}
