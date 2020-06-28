#include <stdio.h>

double fact( int n );

int main(void)
{    
    int i;
    double sum; 

    sum = 0; 
    for(i = 1; i <= 10; i++) 
        sum = sum + fact(i); 

    printf("1!+2!+...+10! = %f\n", sum); 
    return 0;
}

double fact( int n ){
	int i;
	int pow = 1;
	for(i=1;i<n+1;i++){
		pow = pow*i;
	}
	return pow;
}
