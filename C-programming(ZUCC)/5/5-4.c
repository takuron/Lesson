#include <stdio.h>
#include <math.h>

int IsSquare( int n );

int main()
{
    int n;

    scanf("%d", &n);
    if ( IsSquare(n) ) printf("YES\n");
    else printf("NO\n");

    return 0;
}

int IsSquare( int n ){
	double n1 = sqrt(n)*sqrt(n);
	double n2 = n;
	if(n1==n2){
		return 1;
	}
	else{
		return 0;
	}
}
