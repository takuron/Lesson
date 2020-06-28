/**********
* ZUCC Cprograming task
* Author: Takuron@github
**********/

#include <stdio.h>

int main () {
	float ele;
	scanf("%f",&ele);
	
	if(ele < 0){
		printf("Invalid Value!");
	}
	else if (ele < 50){
		printf("cost = %0.2f",0.53*ele);
	}
	else{
		printf("cost = %0.2f",26.5+0.58*(ele-50));
	}
}
