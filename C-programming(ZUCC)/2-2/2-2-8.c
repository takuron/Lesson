/**********
* ZUCC Cprograming task
* Author: Takuron@github
**********/

#include <stdio.h>

int main () {
	int str,arr;
	scanf("%d %d",&str,&arr);
	
	//小时分钟分离 
	int strh = str/100;
	int strm = str%100;
	int arrh = arr/100;
	int arrm = arr%100;
	
	//判断能否直接相减
	
	if(arrm >= strm){
		int timeh = arrh - strh;
		int timem = arrm - strm;
		//如果没有十位 
		if(timem/10==0){
			if (timeh/10==0){
				printf("0%d:0%d",timeh,timem);
			}
			else{
				printf("%d:0%d",timeh,timem);
			}
		}
		else{
			if (timeh/10==0){
				printf("0%d:%d",timeh,timem);
			}
			else{
				printf("%d:%d",timeh,timem);
			}
		}
		
	} 
	else{
		// 借位 
		int timeh = arrh - strh - 1;
		int timem = arrm + 60 - strm;
		//如果没有十位 
		if(timem/10==0){
			if (timeh/10==0){
				printf("0%d:0%d",timeh,timem);
			}
			else{
				printf("%d:0%d",timeh,timem);
			}
		}
		else{
			if (timeh/10==0){
				printf("0%d:%d",timeh,timem);
			}
			else{
				printf("%d:%d",timeh,timem);
			}
		}
	}
}
