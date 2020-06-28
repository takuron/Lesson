#include <stdio.h>
#include <math.h>

double funcos( double e, double x );

int main()
{    
    double e, x;

    scanf("%lf %lf", &e, &x);
    printf("cos(%.2f) = %.6f\n", x, funcos(e, x));

    return 0;
}

double fact( int n );

double funcos( double e, double x ){
	double cos = 0;
	double last = 100;
	int i=0;
	int sign = 1;
	while(last>e){
		last = pow(x,i)/fact(i);
		cos = cos + sign*last;
		sign = -sign;
		i = i+2;
	}
	return cos;
}

double fact( int n ){
	int i;
	int pow = 1;
	for(i=1;i<n+1;i++){
		pow = pow*i;
	}
	return pow;
}
