/**********
* ZUCC Cprograming task
* Author: Takuron@github
**********/

#include <stdio.h>

double mypow( double x, int n );

int main()
{
    double x;
    int n;

    scanf("%lf %d", &x, &n);
    printf("%f\n", mypow(x, n));

    return 0;
}

double mypow( double x, int n ){
	if (n < 0){
		int i = 1;
		double sum = x;
		while( i< (-n) ){
			sum = sum*x ;
			i ++;
		}
		return 1/sum;
	}
	else if(n == 0){
		return 1;
	}
	else{
		int i = 1;
		double sum = x;
		while( i<n ){
			sum = sum*x ;
			i ++;
			}
		return sum;
	}
	
}
