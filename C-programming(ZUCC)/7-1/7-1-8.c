/**********
* ZUCC Cprograming task
* Author: Takuron@github
**********/

#include <stdio.h>

int main () {
	int n;
	scanf("%d",&n);
	
	int g,s,b,q,t;
	
	g=(n%10+9)%10;
	s=((n/10)%10+9)%10;
	b=((n/100)%10+9)%10;
	q=(n/1000+9)%10;
	
	t = q;
	q = s;
	s = t;
	
	t = b;
	b = g;
	g = t;
	
	if(q==0){
		printf("The encrypted number is 0%d",g+10*s+100*b+1000*q);
	}
	else{
		printf("The encrypted number is %d",g+10*s+100*b+1000*q);
	}
	
	
	return 0;
}
