/**********
* ZUCC Cprograming task
* Author: Takuron@github
**********/

#include <stdio.h>

int main () {
	int x,y;
	scanf("%d",&x);
	
	y=x;
	
	int a[x][y],iinput1,iinput2;
	
	for(iinput1=0;iinput1<x;iinput1++){
		for(iinput2=0;iinput2<y;iinput2++){
			int input;
			scanf("%d",&input);
			a[iinput1][iinput2]= input;
		}
	}
	
	int i,i2,sum=0;
	
	for(i=0;i<(x-1);i++){
		for(i2=0;i2<(y-1);i2++){
			if((i+i2)!=(x-1)){
				sum = sum + a[i][i2];
			}
		}
	}
	
	printf("%d",sum);
	
	return 0;
}
