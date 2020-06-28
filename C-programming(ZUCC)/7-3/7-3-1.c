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
		istr[ii] = ch;
		ch = getchar();
	} 
	istr[ii+1] = '\0';
	
	char ostr[ii+2];
	int oi = 0;
	
	int i;
	
	for(i=0;i<ii+1;i++){
		ostr[i] = istr[ii-i-1];
	}
	ostr[ii+1]= '\0';
	
	while(ostr[oi]!='\0'){
		putchar(ostr[oi]);
		oi++;
	}
	
	return 0;
}
