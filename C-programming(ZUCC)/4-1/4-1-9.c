/**********
* ZUCC Cprograming task
* Author: Takuron@github
**********/

#include <stdio.h>

int main () {
	int h,n,i;
	double h2,sum;
	scanf("%d %d",&h,&n);
	
	h2 = h;
	
	if(h==0||n==0) printf("0.0 0.0\n");
	else{
		for (i=0;i<n;i++){
		sum += h2*2;
		h2 = h2/2;
	}
	
	sum = sum - h;
	
	printf("%.1f %.1f",sum,h2);
}
	
	
	
	return 0;
}
