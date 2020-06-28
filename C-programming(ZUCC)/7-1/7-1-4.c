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
	
	int i,i2,t;
	
	for(i=0;i<n;i++){
		for (i2=0;i2<n-1;i2++){
			if(a[i2] < a[i2 + 1])
			{
				t = a[i2];
				a[i2] = a[i2 + 1];
				a[i2 + 1] = t;
			}
		}
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
