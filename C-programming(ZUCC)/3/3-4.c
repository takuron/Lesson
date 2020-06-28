/**********
* ZUCC Cprograming task
* Author: Takuron@github
**********/

#include <stdio.h>

int main () {
	int n;
	scanf("%d",&n);
	
	float tex;
	
	if(n <= 1600) tex = 0;
	else if(n <= 2500) tex = 0.05*(n-1600);
	else if(n <= 3500) tex = 0.1*(n-1600);
	else if(n <= 4500) tex = 0.15*(n-1600);
	else tex = 0.2*(n-1600);
	
	printf("%.2f",tex);
	return 0;
}
