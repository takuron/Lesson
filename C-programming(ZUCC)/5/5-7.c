#include <stdio.h>

int narcissistic( int number );
void PrintN( int m, int n );

int main()
{
    int m, n;

    scanf("%d %d", &m, &n);
    if ( narcissistic(m) ) printf("%d is a narcissistic number\n", m);
    PrintN(m, n);
    if ( narcissistic(n) ) printf("%d is a narcissistic number\n", n);

    return 0;
}

int narcissistic(int number)
{
    int i, j, digit, power, powerSum, integer, count, flag;
    
    count = 0;
    integer = number;
    while (integer > 0)
    {
        integer = integer / 10;
        count++;
    }
 
 
    powerSum = 0;
    integer = number;
    for (i = 0; i < count; i++)
    {
        digit = integer % 10;
        integer = integer / 10;
        power = 1;
        for (j = 0; j < count; j++)
            power = power*digit;
        powerSum = powerSum + power;
    }
 
 
    if (powerSum == number)
        flag = 1;
    else
        flag = 0;
 
 
    return flag;
}


void PrintN(int m, int n){
	int i;
    for (i = m + 1; i < n; i++)
    {
        if (narcissistic(i) == 1)
		printf("%d\n", i);
    }
}
