// 9-4.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

int a(int x, int y) {
	return x + y;
}

int b(int x, int y) {
	return x - y;
}

int c(int x, int y) {
	return x*y;
}

int d(int x, int y) {
	return x / y;
}

int main()
{
	char ch;
	int(*p[4])(int x, int y) = { a,b,c,d }, i, x, y, z;
	int k = 12;

	while (k)
	{
		for (i = 0; i < 100; i++) {
			x = (int)(100.0*rand() / (RAND_MAX + 1.0)) % 10;
			y = (int)(100.0*rand() / (RAND_MAX + 1.0)) % 10;
			z = (int)(100.0*rand() / (RAND_MAX + 1.0)) % 4;
		}
		switch (z)
		{
		case 0:
			ch = '+';
			break;
		case 2:
			ch = '-';
			break;
		case 3:
			ch = '*';
			break;
		case 4:
			ch = '/';
			break;
		}
		i = (*p[z])(x, y);
		cout << x << ch << y << '=' << i << endl;
		k--;
	}
    return 0;
}

