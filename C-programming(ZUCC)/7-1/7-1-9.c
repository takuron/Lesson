/**********
* ZUCC Cprograming task
* Author: Takuron@github
**********/

#include <stdio.h>

int main () {
	int n;
	scanf("%d",&n);
	
	int a[n],iinput,max,min,maxn,minn;
	
	for(iinput=0;iinput<n;iinput++){
		int input;
		scanf("%d",&input);
		a[iinput]= input;
		
		if(iinput==0){
			maxn = input;
			max = 0;
			minn = input;
			min = 0;
		}
		else{
			if(input>maxn){
				maxn = input;
				max = iinput;
			}
			if(input<minn){
				minn = input;
				min = iinput;
			}
		}
	}
	
	int first,last;
	
	first = a[0];
	
	a[0] = minn;
	a[min] = first;
	
	if(max==0){
		max = min;
	}
	
	last = a[n-1];
	
	a[n-1] = maxn;
	a[max] = last;
	
	
	
	int ioutput;
	
	for (ioutput = 0; ioutput < n ; ioutput++){
		printf("%d ", a[ioutput]);
	}
	
	return 0;
}
