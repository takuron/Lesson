#include <stdio.h> 
 
 int main() {  
   
	int a[6][6];    
	int n,m;     
	scanf("%d %d",&m,&n);
	//遍历赋值 
	for(int i=0;i<n;i++)         
		for(int j=0;j<n;j++)             
			scanf("%d",&a[i][j]);     
	
	m%=n;   //	  m=n时复原了 没有变化  所以取余数 
	for(int i=0;i<n;i++){         
		for(int j=0;j<n;j++){             
			printf("%d ",a[i][(n-m+j)%n]);     // (n-m+j)%n需要分析出来 
		}         
		printf("\n");     
	}    
	 
	return 0; 
}
