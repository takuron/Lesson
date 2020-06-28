/**********
* ZUCC Cprograming task
* Author: Takuron@github
**********/

#include <stdio.h>

int main () {
	char a;
	a = getchar();
	
	if(a>='a'&&a<='z'){
		putchar(a-'a'+'A');
	}
	else if(a>='A'&&a<='Z'){
		putchar(a);
	}
	else{
		printf("error");
	}
	
	
	
	return 0;
}
