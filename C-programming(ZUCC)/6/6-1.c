/**********
* ZUCC Cprograming task
* Author: Takuron@github
**********/
#include <stdio.h>

int main(){
    double eps, sum=1, i, temp=1;
    scanf("%le", &eps);
    for(i=1; temp>eps; i++){
        temp = temp*i/(2*i+1);
        sum += temp;
    }
    printf("PI = %.5f\n", 2*sum);

    return 0;
}
