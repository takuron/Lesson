#include <stdio.h>

int SumSqrDigit(int number);

int main()
{
    int n;
    scanf("%d", &n);
    printf("%d\n", SumSqrDigit(n));
    return 0;
}

int SumSqrDigit(int number){
	int num = number;
	int sum = 0;
	while(2>1){
		if(num/10>0){
			sum += (num%10)*(num%10);
			num = num/10;
		}
		else{
			sum += num*num;
			return sum;
		}
	}
}
