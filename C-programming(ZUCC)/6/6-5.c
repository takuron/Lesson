#include <stdio.h>
#include <math.h>

int prime( int p );
void Goldbach( int n );

int main()
{
    int m, n, i, cnt;

    scanf("%d %d", &m, &n);
    if ( prime(m) != 0 ) printf("%d is a prime number\n", m);
    if ( m < 6 ) m = 6;
    if ( m%2 ) m++;
    cnt = 0;
    for( i=m; i<=n; i+=2 ) {
        Goldbach(i);
        cnt++;
        if ( cnt%5 ) printf(", ");
        else printf("\n");
    }

    return 0;
}

int prime( int p ){
	int i;  
    int k;
    
    k=(int)sqrt( (double)p );
    for(i=2;i<=k;i++)
        if(p%i==0){
        	break;
        }
		
	if(p==1) return 0;
	else if(p==2) return 1;
    else if(i>k)
        return 1;
    else
        return 0;
}

void Goldbach( int n ){
	int i;
	for(i=2;i<=n;i++){
		int q = n - i;
		if(prime(i)&&prime(q)){
			printf("%d=%d+%d",n,i,q);
			break;
		}
	}
}
