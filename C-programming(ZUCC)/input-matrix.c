/**********
* ZUCC Cprograming task
* Author: Takuron@github
**********/

#include <stdio.h>

int main () {
	int x,y;
	scanf("%d %d",&x,&y);
	
	int a[x][y],iinput1,iinput2;
	
	for(iinput1=0;iinput1<x;iinput1++){
		for(iinput2=0;iinput2<y;iinput2++){
			int input;
			scanf("%d",&input);
			a[iinput1][iinput2]= input;
		}
	}
	
	int ioutput;
	
	for (ioutput = 0; ioutput < n ; ioutput++){
		printf("%d ", a[ioutput]);
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
