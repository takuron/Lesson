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
	
	int i,i2,sum;
	
	for(i=0;i<x;i++){
		sum = 0;
		for(i2=0;i2<y;i2++){
			sum = sum+a[i][i2];
		}
		printf("%d\n",sum);
	}
	
	return 0;
}
