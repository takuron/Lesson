/**********
* ZUCC Cprograming task
* Author: Takuron@github
**********/

#include <stdio.h>
#include <math.h>

int main()
{
    int n = 1;
    int i;
    double sum = 0, eps;
    
    scanf("%lf", &eps);
    
    
    for(i = 1; ; i += 3){
        sum = sum + (n * 1.0 / i);
        n = -n;
        if (1.0 / i <= eps) break;
        
    }
    printf("sum = %.6f\n", sum);
    return 0;
}
