#include <stdio.h>

int main (void){
int N,a[10]={0},x,i,t,max,p[10];
scanf("%d",&N) ;
for(i=1;i<=N;i++){
scanf("%d",&x);
do{t=x%10;a[t]=a[t]+1;x=x/10;}while(x!=0);
}
t=1;
max=a[0];
for(i=1;i<=9;i++){if(a[i]>max){max=a[i];p[0]=i;
}}
for(i=p[0]+1;i<=9;i++){if(a[i]==max){p[t]=i;t++;
}}
printf("%d:",max);
for(i=0;i<=t-1;i++)printf(" %d",p[i]);
return 0;
}
