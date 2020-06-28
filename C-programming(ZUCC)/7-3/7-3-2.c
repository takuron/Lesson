/**********
* ZUCC Cprograming task
* Author: Takuron@github
**********/

#include <stdio.h>

int main () {
	char istr[81],ch,find;
	int ii;
	
	find = getchar();
	
	getchar();
	
	ch=getchar();
	for(ii=0;ch!='\n';ii++){
		istr[ii] = ch;
		ch = getchar();
	} 
	istr[ii+1] = '\0';
	
	int i,iss=-1;
	
	for(i=0;i<ii+1;i++){
		if(istr[i]==find){
			iss=i;
		}
	}
	
	if(iss<0){
		printf("Not Found");
	}
	else{
		printf("index = %d",iss);
	}
	
	return 0;
}
