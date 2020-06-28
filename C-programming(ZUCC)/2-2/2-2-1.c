/**********
* ZUCC Cprograming task
* Author: Takuron@github
**********/

#include <stdio.h>

int main () {
	float x;
	scanf("%f",&x);
	if(x==0){
		printf("f(%0.1f) = %0.1f",(float)x,(float)x);
	}
	else{
		float y = 1.0/x;
		printf("f(%0.1f) = %0.1f",(float)x,y);
	}
}
