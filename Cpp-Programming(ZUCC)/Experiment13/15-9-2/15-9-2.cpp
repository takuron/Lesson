// 15-9-2.cpp : �������̨Ӧ�ó������ڵ㡣
//

// CppProgrammingTask
// Author: takuron@github.com

#include "stdafx.h"

class MathExpection {
public:
	MathExpection(int e) {
		error = e;
	};

	void showExpection() {
		switch (error)
		{
		case 1:
			cout << "��������Ϊ��" << endl;
			break;
		case 2:
			cout << "�������ɿ�����" << endl;
			break;
		default:
			break;
		}
	};

private:
	int error = 0;
};

double f(double a, double b, double c) {
	if (c == 0) {
		throw MathExpection(1);
	}
	else if (a + b / c<0) {
		throw MathExpection(2);
	}
	else {
		return sqrt(a + b / c);
	}
}

void f1(double a, double b, double c) {
	try
	{
		cout << "a=" << a << ",b=" << b << ",c=" << c << endl;
		double s = f(a, b, c);
		cout << "���Ϊ��" << s << endl;
	}
	catch (MathExpection m)
	{
		m.showExpection();
		return;
	}
}

int main()
{
	double a = -5, b = -100, c = 2;
	f1(a, b, c);
	a = 23, b = 35, c = 0;
	f1(a, b, c);
	a = 43, b = 75, c = 15;
	f1(a, b, c);
	return 0;
}