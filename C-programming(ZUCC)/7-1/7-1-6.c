/**********
* ZUCC Cprograming task
* Author: Takuron@github
**********/

#include <stdio.h>

int main () {
	int n,num;
	scanf("%d",&n);
	scanf("%d",&num);
	
	int a[n],is = 0,iinput;
	
	for(iinput=0;iinput<n;iinput++){
		int input;
		scanf("%d",&input);
		a[iinput]=input;
		
	}
	
	int i;
	
	for(i=0;i<n;i++){
		if(num==a[i]){
			printf("%d",i);
			is = 1;
		}
	}
	
	if(!is){
		printf("Not Found");
	}
	
	
	
	return 0;
}
