#include <stdio.h>

void pyramid( int n );

int main()
{    
    int n;

    scanf("%d", &n);
    pyramid(n);

    return 0;
}

void pnull(int n){
	int i;
	for(i=0;i<n;i++){
		printf(" ");
	}
}

void pnumber(int n){
	int i;
	for(i=0;i<n;i++){
		printf("%d ",n);
	}
}

void pyramid( int n ){
	int i;
	for(i=1;i<=n;i++){
		pnull(n-i);
		pnumber(i);
		printf("\n");
	}
}
