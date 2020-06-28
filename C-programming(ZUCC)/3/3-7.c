/**********
* ZUCC Cprograming task
* Author: Takuron@github
**********/

#include <stdio.h>

int main () {
	int n;
	scanf("%d",&n);
	
	int action = n%5;
	if(action<4&&action!=0){
		printf("Fishing in day %d",n);
	}
	else{
		printf("Drying in day %d",n);
	}
	
	return 0;
}
