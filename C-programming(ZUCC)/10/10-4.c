#include <stdio.h>

int Ack( int m, int n );

int main()
{
    int m, n;

    scanf("%d %d", &m, &n);
    printf("%d\n", Ack(m, n));

    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */

int Ack(int m, int n){
	int result;
 
	if (m == 0)
		result = n+1;
	else{
		if (n == 0)
			result = Ack(m - 1, 1);
		else
			result = Ack(m-1, Ack(m, n-1));
	}
	return result;
}
