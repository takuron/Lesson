// 4-7.cpp : 定义控制台应用程序的入口点。
//

// CppProgrammingTask
// Author: takuron@github.com

#include "stdafx.h"

#include "Math-class.h"


int main()
{
	double a, b;
	char s;
	cout << "请输入第一个数" << endl;
	cin >> a;
	cout << "请输入符号" << endl;
	cin >> s;
	cout << "请输入第二个数" << endl;
	cin >> b;

	Math m(a, s, b);
	m.calculate();

    return 0;
}

