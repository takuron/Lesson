/**********
* ZUCC Cprograming task
* Author: Takuron@github
**********/

#include <stdio.h>

int main () {
	printf("[1] apple\n[2] pear\n[3] orange\n[4] grape\n[0] exit\n");
	int i;
	int n;
	for(i=0;i<5;i++){
		scanf("%d",&n);
		switch (n){
			case 1: printf("price = 3.00\n"); break;
			case 2: printf("price = 2.50\n"); break;
			case 3: printf("price = 4.10\n"); break;
			case 4: printf("price = 10.20\n"); break;
			case 0: return 0;break;
			default: printf("price = 0.00\n"); break;
		}
	}
	return 0;
}
