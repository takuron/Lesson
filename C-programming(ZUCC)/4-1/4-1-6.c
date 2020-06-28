/**********
* ZUCC Cprograming task
* Author: Takuron@github
**********/

#include <stdio.h>

int main () {
	int n,i;
	double sum,temp;
	scanf("%d",&n);
	
	double mother = 1.0;
	double child = 2.0;
	
	for(i=0;i<n;i++){
		sum = sum+(child/mother);
		
		temp = mother;
		mother = child ;
		child = temp+child;
	}
	
	printf("%.2f",sum);
	
	return 0;
}
