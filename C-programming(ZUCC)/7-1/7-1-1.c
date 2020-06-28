/**********
* ZUCC Cprograming task
* Author: Takuron@github
**********/

#include <stdio.h>

int main () {
	int n;
	scanf("%d",&n);
	
	int list[n],lists[n+1];
	int i1,i2,i3,add,isadd = 1;
	
	if(n==0){
		scanf("%d",&add);
		printf("%d",add);
		return 0;
	}
	
	for(i1=0;i1<n;i1++){
		int input;
		scanf("%d ",&input);
		
		list[i1] = input;
	}
	
	scanf("%d",&add);
	
	for(i2=0;i2<n;i2++){
		if(i2==n-1&&isadd&&list[i2]<add){
			lists[i2]=list[i2];
			lists[i2+1]=add;
		}
		else if(isadd&&list[i2]<add){
			lists[i2]=list[i2];
		}
		else if(isadd){
			lists[i2]=add;
			lists[i2+1]=list[i2];
			isadd = 0;
		}
		else{
			lists[i2+1]=list[i2];
		}
	}
	
	for (i3 = 0; i3 < n + 1; i3++){
		printf("%d ", lists[i3]);
	}

	
	return 0;
}
