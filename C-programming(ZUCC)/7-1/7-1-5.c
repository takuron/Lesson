/**********
* ZUCC Cprograming task
* Author: Takuron@github
**********/

#include <stdio.h>

int main() {
    int n,i;
    int time[10] = {0};
    scanf("%d", &n);
    for (i=0; i<n; i++) {
        int temp;
        scanf("%d", &temp);
        time[temp%10]++;
        while (temp > 9){
        	temp /= 10;
            time[temp%10]++;
        }
    }
    int max = 0;
    for (i=0; i<10; i++) {
        if (max < time[i]) {
            max = time[i];
        }
    }
    
    printf("%d:", max);
    for (i=0; i<10; i++) {
        if (max == time[i]) {
            printf(" %d",i);
        }
    }
    
    return 0;
}
