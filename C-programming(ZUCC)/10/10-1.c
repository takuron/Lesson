#include <stdio.h>
#include <math.h>

int search( int n );

int main()
{
    int number;

    scanf("%d",&number);
    printf("count=%d\n",search(number));
		
    return 0;
}


/* 你的代码将被嵌在这里 */

int search( int n ){
	int i;
	int count = 0;
	for(i=11;(i*i)<=n;i++){
		int num = i*i;
		int g = num%10;
		int s = (num/10)%10;
		int b = num/100;
		if(g==s||g==b|s==b){
			count++;
		}
	} 
	return count;
}
