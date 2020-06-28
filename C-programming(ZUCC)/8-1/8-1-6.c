/**********
* ZUCC Cprograming task
* Author: Takuron@github
**********/


#include <stdio.h>
#define MAXN 10

int ArrayShift( int a[], int n, int m );

int main()
{
    int a[MAXN], n, m;
    int i;

    scanf("%d %d", &n, &m);
    for ( i = 0; i < n; i++ ) scanf("%d", &a[i]);

    ArrayShift(a, n, m);

    for ( i = 0; i < n; i++ ) {
        if (i != 0) printf(" ");
        printf("%d", a[i]);
    }
    printf("\n");

    return 0;
}

/* 你的代码将被嵌在这里 */


int ArrayShift( int a[], int n, int m ){
  int i,j;
  m=m%n;
  int temp[n];
  for(i=0;i<n;i++)
    temp[i]=a[i];
    for(j=0;j<n;j++)
    if(j>=(n-m)){
      a[j+m-n]=temp[j];  
    }
    else
    
      a[j+m]=temp[j];
}
