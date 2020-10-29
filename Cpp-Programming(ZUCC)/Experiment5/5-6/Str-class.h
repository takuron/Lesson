#pragma once

#include "stdafx.h"

class Str
{
public:
	Str(char a[],char b[], char c);
	void opre();

private:
	char str1[80], str2[80], tempStr2[80], tempStr[80];
	char ch;
};

Str::Str(char a[], char b[], char c)
{
	strcpy(str1, a);
	strcpy(str2, b);
	ch = c;
}

void Str::opre() {
	if (ch == '+') {
		strcat(str1, str2);
		cout << str1 << endl;
	}
	else if (ch == '-') {
		strcpy(tempStr, str1);
		strrev(tempStr);
		if (tempStr[0] != ' ') {
			strcat(str1, str2);
			cout << str1 << endl;
		}
		else {
			int i;
			for (i = 0; tempStr[i] == ' '; i++) {

			}
			strncpy(tempStr2, str1, (strlen(str1) - i -1));
			strcat(tempStr2, str2);
			cout << tempStr2 << endl;
		}
	}
}