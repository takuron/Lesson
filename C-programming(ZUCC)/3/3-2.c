/**********
* ZUCC Cprograming task
* Author: Takuron@github
**********/

#include <stdio.h>

int main () {
	int i;
	char c;
	int letter = 0, blank = 0, digit = 0, other = 0;
	for(i=0;i<10;i++){
		c=getchar();
		if(c>='A'&&c<='Z'){
			letter++;
		}
		else if(c>='a'&&c<='z'){
			letter++;
		}
		else if(c>='0'&&c<='9'){
			digit++;
		}
		else if(c==' '||c=='\n'){
			blank++;
		}
		else{
			other++;
		}
	}
	
	printf("letter = %d, blank = %d, digit = %d, other = %d",letter , blank , digit , other );
	

}
