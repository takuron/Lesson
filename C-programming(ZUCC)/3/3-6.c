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
	
	if((a+b)>c&&(a+c)>b&&(b+c)>a){
		int perimeter=a+b+c;
		double s = (double)perimeter/2;
		double area = sqrt(s*(s-a)*(s-b)*(s-c));
		
		printf("area = %.2f; perimeter = %.2f",area,(float)perimeter);
	}
	else{
		printf("These sides do not correspond to a valid triangle");
	}
	return 0;
}
