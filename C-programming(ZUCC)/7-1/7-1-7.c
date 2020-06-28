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
		a[iinput]= input;
	}
	
	int b[n-1],i1,hh=1;
	
	for(i1=0;i1<n-1;i1++){
		if(hh%3==0){
			printf("%d\n",a[i1+1]-a[i1]);
		}
		else if(i1==n-2){
			printf("%d",a[i1+1]-a[i1]);
		}
		else{
			printf("%d ",a[i1+1]-a[i1]);
		}
		
		hh++;
	}
	
	
	
	return 0;
}
