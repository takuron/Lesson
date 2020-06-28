/**********
* ZUCC Cprograming task
* Author: Takuron@github
**********/

#include<stdio.h>
#include<string.h>


int main(void)
{
	int i, len = 0, cnt = 0;
	char ch;
	char str[81];   
	char c;        
 
	ch = getchar();  
	for (i = 0; ch != '\n'; i++)
	{
		str[i] = ch;
		len++;
		ch = getchar();
	}
	scanf("%c",&c);   
	for (i = 0; i < len; i++)  
	{
		if (c == str[i])
		{
			cnt++;
		}
	}
	printf("%d\n", cnt);
	return 0;
}

