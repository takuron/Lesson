/**********
* ZUCC Cprograming task
* Author: Takuron@github
**********/

#include <stdio.h>
#include <math.h>

int main () {
	int n;
	int pows,i;
	int size =0;
	scanf("%d",&n);
	
	//计算位数
	
	if(n==0) size++;
	
	for(pows=0;3>2;pows++){
		if(n/(int)pow(10,pows)>=1){
			size++;
		}
		else{
			break;
		}
	} 
	
	//输出
	
	for(i=size-1;i>0;i--){
		printf("%d ",(n/(int)pow(10,i))%10);
	} 
	
	printf("%d ",n%10);
	
	return 0;
}
