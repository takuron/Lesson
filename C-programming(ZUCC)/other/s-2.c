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
	
		int perimeter=a+b+c;
		double s = (double)perimeter/2;
		double area = sqrt(s*(s-a)*(s-b)*(s-c));
		
		printf("area = %.2f;",area);
	return 0;
}
