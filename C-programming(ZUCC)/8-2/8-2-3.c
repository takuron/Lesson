#include <stdio.h>
#define MAXN 20

void delchar( char *str, char c );
void ReadString( char s[] ); /* �ɲ���ʵ�֣���ȥ���� */

int main()
{
    char str[MAXN], c;

    scanf("%c\n", &c);
    ReadString(str);
    delchar(str, c);
    printf("%s\n", str);

    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */


void delchar( char *str, char c )  
{  
    int i,j,t=1;  
    for(i=MAXN-1;i>=0;i--)  
    {  
        if(str[i]==c)  
        {  
            for(j=i;j<MAXN-t;j++)  
            {  
                str[j]=str[j+1];  
            }  
            t++;  
        }  
    }  
}

