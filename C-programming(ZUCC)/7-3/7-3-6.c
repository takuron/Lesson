/**********
* ZUCC Cprograming task
* Author: Takuron@github
**********/

#include <stdio.h>

int main()
{
    int sum = 0;
    char ch;
    while ((ch = getchar()) != '\n')
        if(ch >= '0' && ch <= '9')
          sum = sum * 10 + (ch - '0');
    printf("%d\n", sum);
    return 0;
}
