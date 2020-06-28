/**********
* ZUCC Cprograming task
* Author: Takuron@github
**********/

#include <stdio.h>

int main () {
	int number = 152;
	int hundred = number/100;
	int ten = number%100/10;
	int first = number%10;
	printf("%d = %d + %d*10 + %d*100",number,first,ten,hundred);
}
