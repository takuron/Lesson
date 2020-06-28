/**********
* ZUCC Cprograming task
* Author: Takuron@github
**********/

#include <stdio.h>
#include <math.h>

int isPrim(int n);

int main () {
	int n;
	int i;
	scanf("%d",&n);
	
	for(i=2;i<=n;i++){
		int q = n - i;
		if(isPrim(i)&&isPrim(q)){
			printf("%d = %d + %d",n,i,q);
			break;
		}
	}
	
	return 0;
}

int isPrim(int n){
    int i;  
    int k;
    
    k=(int)sqrt( (double)n );
    for(i=2;i<=k;i++)
        if(n%i==0){
        	break;
        }
		
    if(i>k)
        return 1;
    else
        return 0;
}
