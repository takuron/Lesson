/**********
* ZUCC Cprograming task
* Author: Takuron@github
**********/

#include <stdio.h>

int main () {
	char istr[81],ch;
	int ii;
	ch=getchar();
	for(ii=0;ch!='\n';ii++){
		if(ch>='A'&&ch<='Z'){
			ch = 'Z'-(ch-'A');
		}
		istr[ii] = ch;
		ch = getchar();
	} 
	istr[ii+1] = '\0';
	
	int oi = 0;
	
	while(istr[oi]!='\0'){
		putchar(istr[oi]);
		oi++;
	}
	
	return 0;
}
