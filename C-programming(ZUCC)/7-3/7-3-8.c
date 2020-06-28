/**********
* ZUCC Cprograming task
* Author: Takuron@github
**********/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];
    int i=0;
    gets(str);
    while(str[i]!='#')
    {
        if(str[i]>='a'&&str[i]<='z')
            str[i]=str[i]-32;
        else if(str[i]>='A'&&str[i]<='Z')
            str[i]=str[i]+32;
            i++;
    }
    
    int j;
    
    for(j=0;j<i;j++)
        printf("%c",str[j]);
    printf("\n");
    return 0;
 
}
