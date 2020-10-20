#pragma once

// CppProgrammingTask
// Author: takuron@github.com

#include "stdafx.h"

class Math
{
public:
	Math(double a,char s, double b);
	void calculate() {
		switch (ch) {
		case '+':
			cout << x << ' ' << ch << ' ' << y << " = " << x + y << endl;
			break;
		case '-':
			cout << x << ' ' << ch << ' ' << y << " = " << x - y << endl;
			break;
		case '*':
			cout << x << ' ' << ch << ' ' << y << " = " << x * y << endl;
			break;
		case '/':
			if (y == 0) {
				cout << "错误，除数不能为零" << endl;
			}
			else {
				cout << x << ' ' << ch << ' ' << y << ' = ' << x / y << endl;
			}
			break;
		}
	}

private:
	double x, y;
	char ch;
};

Math::Math(double a, char s, double b)
{
	x = a; ch = s; y = b;
}