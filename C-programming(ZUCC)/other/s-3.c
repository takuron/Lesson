/**********
* ZUCC Cprograming task
* Author: Takuron@github
**********/

#include <stdio.h>
#include <math.h>

int main () {
	int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	
	float x1 = (0-b+sqrt(b*b-4*a*c))/(2*a);	
	float x2 = (0-b-sqrt(b*b-4*a*c))/(2*a);
	
	printf("%.2f %.2f",x1,x2);
	
	return 0;
}
