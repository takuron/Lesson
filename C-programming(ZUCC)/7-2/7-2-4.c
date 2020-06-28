/**********
* ZUCC Cprograming task
* Author: Takuron@github
**********/

#include <stdio.h>

int main()
{
    int year, month, day;
    int sum = 0, flag = 0;
    scanf("%d/%d/%d", &year, &month, &day);
    switch(month)
    {
        case 1: sum = 0; break;
        case 2: sum = 31; break;
        case 3: sum = 59; break;
        case 4: sum =90; break;
        case 5: sum = 120; break;
        case 6: sum = 151; break;
        case 7: sum = 181; break;
        case 8: sum = 212; break;
        case 9: sum = 243; break;
        case 10: sum = 273; break;
        case 11: sum = 304; break;
        default: sum = 334; break;
    }
    sum += day;
    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        flag = 1;
    if(flag == 1 && month > 2)
        sum++;
    printf("%d", sum);
    return 0;
}
