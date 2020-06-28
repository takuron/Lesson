#include <stdio.h>

double fact( int n );
double factsum( int n );

int main()
{
    int n;

    scanf("%d",&n);
    printf("fact(%d) = %.0f\n", n, fact(n));
    printf("sum = %.0f\n", factsum(n));
		
    return 0;
}

/* 你的代码将被嵌在这里 */

double fact( int n ){
	if(n==1){
		return 1;
	}
	else if(n==0){
		return 1;
	}
	else{
		return fact(n-1)*n;
	}
	
}

double factsum( int n ){
	int i,sum = 0;
	for(i=1;i<n+1;i++){
		sum = sum+fact(i);
	}
	return sum;
}
