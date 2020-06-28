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
	
	
	int max = -999999,i1,deep;
	
	for(i1=0;i1<n;i1++){
		if(a[i1]>max){
			max = a[i1];
			deep = i1;
		}
	}
	
	printf("%d %d",max,deep);
	
	return 0;
}
