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
	
	int i,start = 0,pow = 1;
	
	int number = 0;
	
	for(i=0;i<ii+1;i++){
		if(istr[i]=='-'&&(!start)){
			pow = -1;
			start = 1;
		}
		if(istr[i]>='A'&&istr[i]<='F'){
			number = number*16;
			number = number+(istr[i]-'A'+10);
			start = 1;
		}
		else if(istr[i]>='a'&&istr[i]<='f'){
			number = number*16;
			number += (istr[i]-'a'+10);
			start = 1;
		}
		else if(istr[i]>='0'&&istr[i]<='9'){
			number = number*16;
			number += (istr[i]-'0');
			start = 1;
		}
	}
	
	printf("%d",pow*number);
	
	return 0;
}
