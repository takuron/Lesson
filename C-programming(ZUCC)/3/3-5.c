/**********
* ZUCC Cprograming task
* Author: Takuron@github
**********/

#include <stdio.h>

int main () {
	int n;
	scanf("%d",&n);
	int i;
	int s;
	int a=0,b=0,c=0,d=0,e=0;
	for(i=0;i<n;i++){
		scanf("%d",&s);
		if(s>=90) a++;
		else if(s>=80) b++;
		else if(s>=70) c++;
		else if(s>=60) d++;
		else e++;
	}
	
	printf("%d %d %d %d %d",a,b,c,d,e);
	return 0;
}
