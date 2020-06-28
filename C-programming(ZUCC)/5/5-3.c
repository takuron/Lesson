#include <stdio.h>
#include <math.h>

int prime( int p );
int PrimeSum( int m, int n );

int main()
{
    int m, n, p;
    
    scanf("%d %d", &m, &n);
    printf("Sum of ( ");
    for( p=m; p<=n; p++ ) {
        if( prime(p) != 0 )
            printf("%d ", p);
    }
    printf(") = %d\n", PrimeSum(m, n));

    

    return 0;
}

int prime( int p ){
	int i;
	if(p==1||p<=0){
		return 0;
	}
	else{
		for (i = 2;i<p-1;i++){
		
			if(p%i==0){
				return 0;
			}
		}
		return 1;
	}
	
}

int PrimeSum( int m, int n ){
	int i;
	int sum = 0;
	if(m==n&&prime(m)){
		return m;
	}
	for(i=m;i<n;i++){
		if(prime(i)){
			sum = sum + i;
		}
	}
	return sum;
}
