/**********
* ZUCC Cprograming task
* Author: Takuron@github
**********/

#include <stdio.h>

int main () {
	int n;
	scanf("%d",&n);
	
	int a[n],iinput;
	
	for(iinput=0;iinput<n;iinput++){
		int input;
		scanf("%d",&input);
		a[n-iinput-1]= input;
	}
	
	int ioutput;
	
	int isfirst = 1;
	
	for (ioutput = 0; ioutput < n ; ioutput++){
		if(isfirst){
			isfirst = 0;
			printf("%d", a[ioutput]);
		}
		else{
			printf(" %d", a[ioutput]);
		}
	}
	
	return 0;
}
