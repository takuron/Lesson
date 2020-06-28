#include <stdio.h>
#include <string.h>

#define MAXN 20
typedef enum {false, true} bool;

bool palindrome( char *s );

int main()
{
    char s[MAXN];

    scanf("%s", s);
    if ( palindrome(s)==true )
        printf("Yes\n");
    else
        printf("No\n");
    printf("%s\n", s);

    return 0;
}

/* ��Ĵ��뽫��Ƕ������ */

bool palindrome( char *s ){
	int i,j;
	
	for(i=0;s[i]!='\0';i++);
	i=i-1;
	
	for(j=0;j<i;j++){
		if(s[j]!=s[i-j]){
			return false;
		}
	}
	
	return true;
}
