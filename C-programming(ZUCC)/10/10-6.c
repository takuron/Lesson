#include <stdio.h>

void dectobin( int n );

int main()
{
    int n;

    scanf("%d", &n);
    dectobin(n);

    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */

void dectobin( int n ){
	int sec = n/2;
	if(n>1){
		dectobin(n/2);
		printf("%d",n%2);
	}
	else{
		printf("%d",n);
	}
	
}
