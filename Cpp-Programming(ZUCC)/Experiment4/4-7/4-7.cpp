// 4-7.cpp : �������̨Ӧ�ó������ڵ㡣
//

// CppProgrammingTask
// Author: takuron@github.com

#include "stdafx.h"

#include "Math-class.h"


int main()
{
	double a, b;
	char s;
	cout << "�������һ����" << endl;
	cin >> a;
	cout << "���������" << endl;
	cin >> s;
	cout << "������ڶ�����" << endl;
	cin >> b;

	Math m(a, s, b);
	m.calculate();

    return 0;
}

