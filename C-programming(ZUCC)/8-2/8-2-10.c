#include <stdio.h>
#include <math.h>
int main ()
{ int j,i,sum=0,a,b,c,d;
  char ch;
  for(j=0; j<32; j++)
  { ch=getchar();
    i=j%8;
    sum+=(ch-'0')*pow(2,7-i);
    if(j==7)
      a=sum,sum=0;
    else if(j==15)
      b=sum,sum=0;
    else if(j==23)
      c=sum,sum=0;
    else if(j==31)
      d=sum;
  }
  printf("%d.%d.%d.%d",a,b,c,d);
  return 0;
}

