#include <stdio.h>

int reverse( int number );

int main()
{
    int n;

    scanf("%d", &n);
    printf("%d\n", reverse(n));

    return 0;
}

int reverse( int number ){
	int i=1,a,sum=0;
	
	if(number<0){
		number=-number;
		i=-1;
	}
 
	while(number){
		a = number%10;
		sum = sum * 10 +a;
		number/=10;
	}
	sum*=i;
 
	return sum;
}
