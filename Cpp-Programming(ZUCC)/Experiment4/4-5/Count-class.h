#pragma once

#include "stdafx.h"

class Count
{
public:
	Count(char s[]);
	void computer() {
		int i;

		letter = 0;
		digital = 0;
		space = 0;
		other = 0;

		for (i = 0; str[i] != '\0'; i++) {
			if (str[i] >= 'A'&&str[i] <= 'Z') {
				letter++;
			}
			else if (str[i] >= 'a'&&str[i] <= 'z') {
				letter++;
			}
			else if (str[i] >= '0'&&str[i] <= '9') {
				digital++;
			}
			else if (str[i] == ' ') {
				space++;
			}
			else {
				other++;
			}
		}
		cout << "共有：" << letter << "个字母，" << digital << "个数字，" << space << "个空格，" << other << "个其他字符" << endl;
	}

private:
	char str[100];
	int letter, digital, space, other;
};

Count::Count(char s[])
{
	strcpy(str, s);
}