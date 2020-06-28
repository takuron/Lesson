/**********
* ZUCC Cprograming task
* Author: Takuron@github
**********/

#include <stdio.h>

int main () {
	int n;
	scanf("%d",&n);
	
	if(n>0) printf("sign(%d) = 1",n);
	else if(n<0) printf("sign(%d) = -1",n);
	else printf("sign(%d) = 0",n);
}
