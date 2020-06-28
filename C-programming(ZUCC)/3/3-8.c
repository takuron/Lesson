/**********
* ZUCC Cprograming task
* Author: Takuron@github
**********/

#include <stdio.h>

int main () {
	int sp,mp;
	scanf("%d %d",&sp,&mp);
	
	int per = (((double)sp/mp)-1)*100+0.5;
	if(per < 10){
		printf("OK");
	}
	else if(per<50){
		printf("Exceed %d%%. Ticket 200",per);
	}
	else{
		printf("Exceed %d%%. License Revoked",per);
	}
	return 0;
}
