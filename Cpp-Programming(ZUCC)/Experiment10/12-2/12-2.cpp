// 12-2.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "Complex-class.h"


int main()
{
	complex a(11.1, 22.2), b(33.3, 44.4);
	const complex d(0.1, 0.2);
	complex c;

	c = a + b;
	cout << c;

	c = 5 - a;
	cout << c;

	c = a / b + d;
	cout << c;

	c = 5 * a;
	cout << c;
    return 0;
}

