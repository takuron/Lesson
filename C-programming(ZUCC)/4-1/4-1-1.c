/**********
* ZUCC Cprograming task
* Author: Takuron@github
**********/

#include <stdio.h>

int main () {
	int m,n;
	scanf("%d %d",&m,&n);
	
	int max,min;
	int in,bei;
	
	if(m>=n){
		max=m;
		min=n;
	}
	else{
		max=n;
		min=m;
	}
	
	int i;
	for(i=min;i>0;i--){
		if((m%i==0)&&(n%i==0)){
			in = i ;
			break;
		}
	}
	
	int j;
	for(j=max;j>1;j++){
		if((j%m==0)&&(j%n==0)){
			bei = j ;
			break;
		}
	}
	
	printf("%d %d",in,bei);
	
	return 0;
}
