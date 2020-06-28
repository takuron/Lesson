#include<stdio.h>
#include<string.h> 
int main(){
	int n,i;
	char a[81],min[81]="zzzzzzzzzzzzzzzzzzzzz";
	scanf("%d",&n); 
	for(i=0;i<n;i++){
		scanf("%s", &a);                      
		if(strcmp(min,a)>0)
			strcpy(min,a);
	}
	printf("Min is: %s",min);
}
