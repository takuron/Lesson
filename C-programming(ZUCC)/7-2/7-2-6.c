#include <stdio.h> 
 
 int main() {  
   
	int a[6][6];    
	int n,m;     
	scanf("%d %d",&m,&n);
	//������ֵ 
	for(int i=0;i<n;i++)         
		for(int j=0;j<n;j++)             
			scanf("%d",&a[i][j]);     
	
	m%=n;   //	  m=nʱ��ԭ�� û�б仯  ����ȡ���� 
	for(int i=0;i<n;i++){         
		for(int j=0;j<n;j++){             
			printf("%d ",a[i][(n-m+j)%n]);     // (n-m+j)%n��Ҫ�������� 
		}         
		printf("\n");     
	}    
	 
	return 0; 
}
