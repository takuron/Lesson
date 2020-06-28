#include <stdio.h>

int fib( int n );
void PrintFN( int m, int n );
	
int main()
{
    int m, n, t;

    scanf("%d %d %d", &m, &n, &t);
    printf("fib(%d) = %d\n", t, fib(t));
    PrintFN(m, n);

    return 0;
}

int fib( int n ){
	int i;
	int n1=1;
	int n2=1;
	
	if(n==1||n==2){
		return 1;
	}
	
	for(i=3;i<=n;i++){
		if(i%2==1){
			n1 = n1+n2;
		}
		else{
			n2 = n1+n2;
		}
	}
	if(n%2==1){
		return n1;
	}
	else{
		return n2;
	}
}

void PrintFN( int m, int n ){
	int i = 1;
	int k = 0;
	int feb;
	while(2>1){
		feb = fib(i);
		if(feb>=m&&feb<=n){
			if(k==0){
				printf("%d",feb);
				k=1;
			}
			else{
				printf(" %d",feb);
			}
			
		}
		else if(feb>n&&k==0){
			printf("No Fibonacci number"); 
			break;
		}
		else if(feb>n){
			break;
		}
		i++;
	}
}
