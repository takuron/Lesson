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
	
	int i,i2,flag=0;
	
	for(i=1;i<(x-1);i++){
		for(i2=1;i2<(y-1);i2++){
			int t1 = a[i][i2] > a[i][i2-1];
			int t2 = a[i][i2] > a[i][i2+1];
			int t3 = a[i][i2] > a[i-1][i2];
			int t4 = a[i][i2] > a[i+1][i2];
			if(t1&&t2&&t3&&t4){
				printf("%d %d %d\n",a[i][i2],i+1,i2+1);
				flag = 1;
			}
		}
	}
	
	if(!flag){
		printf("None %d %d",x,y);
	}
	
	
	return 0;
}
