/**********
* ZUCC Cprograming task
* Author: Takuron@github
**********/

#include <stdio.h>

int main () {
	int str,arr;
	scanf("%d %d",&str,&arr);
	
	//Сʱ���ӷ��� 
	int strh = str/100;
	int strm = str%100;
	int arrh = arr/100;
	int arrm = arr%100;
	
	//�ж��ܷ�ֱ�����
	
	if(arrm >= strm){
		int timeh = arrh - strh;
		int timem = arrm - strm;
		//���û��ʮλ 
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
		// ��λ 
		int timeh = arrh - strh - 1;
		int timem = arrm + 60 - strm;
		//���û��ʮλ 
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
