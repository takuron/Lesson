/**********
* ZUCC Cprograming task
* Author: Takuron@github
**********/

#include <stdio.h>

int main () {
	char istr[81],ch;
	int ii,count=0;
	
	ch=getchar();
	for(ii=0;ch!='\n';ii++){
		if(ch>='A'&&ch<='Z'){
			if(ch == 'A'||ch == 'E'||ch == 'I'||ch == 'O'||ch == 'U'){
				
			}
			else{
				count++;
			}
		}
		ch = getchar();
	} 
	istr[ii+1] = '\0';
	
	printf("%d",count);
	
	return 0;
}
