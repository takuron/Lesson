/**********
* ZUCC Cprograming task
* Author: Takuron@github
**********/

#include <stdio.h>

int main () {
	int a,b,i,j,s,k,num;
	scanf("%d %d",&a,&b);
	for(i=a;i<=b;i++)
	{
		s=0;
		for(j=1;j<i;j++)
		{
			if(i%j==0)
			{
				s+=j;
			}
		}
		if(s==i||i==1)
		{
			printf("%d = 1",i);
			for(k=2;k<j;k++)
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
			printf("None\n");
		}
	return 0;
}
