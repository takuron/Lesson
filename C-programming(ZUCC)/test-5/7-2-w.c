/**********
* ZUCC Cprograming task
* Author: Takuron@github
**********/

#include <stdio.h>

int main () {
	int count = 0;
	int ces = 1;
	char a;
	while((a=getchar())!='\n'&&ces<9999){
		if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'){
			count++;
		}
		ces++;
	}
	
	printf("%d",count);
	
	return 0;
}
