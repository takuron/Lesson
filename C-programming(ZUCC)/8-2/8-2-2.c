#include<stdio.h>
#include<string.h>
int main()
{   
    int i,n,num,t=0,max=0;
    scanf("%d",&n);
    char a[n][80];
    for(i=0;i<n;i++)
    {
        scanf("\n%s",&a[i]);
        num=strlen(a[i]);
        if(max<num)
        {max=num;t=i;}
    }
    printf("The longest is: %s",a[t]);
 return 0;
}
