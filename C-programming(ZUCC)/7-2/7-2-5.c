/**********
* ZUCC Cprograming task
* Author: Takuron@github
**********/

#include <stdio.h>

int main () {
	int nu,ii,isnum;
	scanf("%d",&nu);
	int iss[nu];
	for(ii=0;ii<nu;ii++){
		int x,y;
		scanf("%d",&x);
		
		y = x;
	
		int a[x][y],iinput1,iinput2;
	
		for(iinput1=0;iinput1<x;iinput1++){
			for(iinput2=0;iinput2<y;iinput2++){
				int input;
				scanf("%d",&input);
				a[iinput1][iinput2]= input;
			}
		}
		
		int i,j,is=1;
		
		for(i=0; i<x; i++){
			for(j=0; j<x; j++){
				if(i>j && a[i][j] != 0){
					is = 0;
				}
			}		
		}
		if(is){
			iss[ii] = 1;
		}
		else{
			iss[ii] = 0;
		}
		
		
	}
	
	for(ii=0;ii<nu;ii++){
		if(ii!=(nu-1)){
			if(iss[ii]){
				printf("YES\n");
			}
			else{
				printf("NO\n");
			}
		}
		else{
			if(iss[ii]){
				printf("YES");
			}
			else{
				printf("NO");
			}
		}
	}
	
	return 0;
}
