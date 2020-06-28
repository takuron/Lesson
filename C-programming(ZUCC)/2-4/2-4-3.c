/**********
* ZUCC Cprograming task
* Author: Takuron@github
**********/

#include <stdio.h>

int main () {
	int n;
	scanf("%d",&n);
	int i = 0;
	int sum = 0;
	
	while(i < n){
		i++;
		int i2 = 0;
		int ssum = 1;
		while(i2 < i){
			i2++;
			ssum = ssum*i2;
		}
		sum = sum+ssum;	
		
	}
	printf("%d",sum);
}
