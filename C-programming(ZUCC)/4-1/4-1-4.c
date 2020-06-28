/**********
* ZUCC Cprograming task
* Author: Takuron@github
**********/

#include <stdio.h>

int main () {
	int n, temp, i = 0, sum = 0;

    scanf("%d", &n);
    temp = n;
    while (temp) {
        sum += temp % 10;
        temp /= 10;
        i++;
    }
    printf("%d %d", i, sum);

    return 0;
}
