/**********
* ZUCC Cprograming task
* Author: Takuron@github
**********/

#include <stdio.h>
#include <math.h>

int main () {
	float money,rate,year;
	scanf("%f %f %f",&money,&year,&rate);
	//pow(x,y); ��x��y�η�,������ math.h
	printf("interest = %.2f",(money*pow(1+rate,year)-money));
	return 0;
}
