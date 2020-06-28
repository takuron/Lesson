/**********
* ZUCC Cprograming task
* Author: Takuron@github
**********/

#include <stdio.h>

int main () {
	int n,i1,i2;
	scanf("%d",&n);
	
	int fc = n/5;
	int count = 0;
	
	for (i1=fc;i1>0;i1--){
		int tc = (n-i1*5)/2;
		
		for (i2=tc;i2>0;i2--){
			int oc = (n-i1*5-i2*2);
			if(oc>0){
				printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n",i1,i2,oc,(i1+i2+oc));
				count++;
			}
		}
	}
	
	printf("count = %d",count);
	
	return 0;
}
