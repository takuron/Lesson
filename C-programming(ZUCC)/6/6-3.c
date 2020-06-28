#include <stdio.h>

int factorsum( int number );
void PrintPN( int m, int n );
	
int main()
{
    int i, m, n;

    scanf("%d %d", &m, &n);
    if ( factorsum(m) == m ) printf("%d is a perfect number\n", m);
    if ( factorsum(n) == n ) printf("%d is a perfect number\n", n);
    PrintPN(m, n);

    return 0;
}

int factorsum( int number ){
	int s = 0;
	int j;
	if(number==1){
		return 1;
	}
	for(j=1;j<number;j++)
		{
			if(number%j==0)
			{
				s+=j;
			}
		}
	return s;
}

void PrintPN( int m, int n ){
	int a,b,k,i;
	int num = 0;
	for(i=m;i<=n;i++)
	{
		if(factorsum(i) == i)
		{
			printf("%d = 1",i);
			for(k=2;k<i;k++)
			{
				if(i%k==0)
				{
					printf(" + %d",k);
				}
			}
			printf("\n");
			num++;
		}
		
	}
	if(num==0)
		{
			printf("No perfect number\n");
		}
}
