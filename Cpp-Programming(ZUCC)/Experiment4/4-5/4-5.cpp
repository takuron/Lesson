// 4-5.cpp : �������̨Ӧ�ó������ڵ㡣
//

// CppProgrammingTask
// Author: takuron@github.com

#include "stdafx.h"
#include "Count-class.h"

void gets(char* ss);

int main()
{
	char s[100];
	gets(s);
	Count c(s);
	c.computer();
    return 0;
}

void gets(char* ss) {
	char ch;
	int i = 0;
	while ((ch = getchar()) != '\n') {
		ss[i] = ch;
		i++;
	}
	ss[i] = '\0';
}

