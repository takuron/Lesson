// 4-6.cpp : �������̨Ӧ�ó������ڵ㡣
//

// CppProgrammingTask
// Author: takuron@github.com

#include "stdafx.h"

#include "Triangle-class.h"

//void fun(int a, int b, int c) {
//	if (a + b > c&&a + c > b&&b + c > a) {
//		int sideflag = 0;
//		cout << "�ܹ���������";
//		if (a == b&&b == c) {
//			cout << ",������һ���ȱ�������" << endl;
//		}
//		else if (a == b || b == c || c == a) {
//			cout << "��������һ������������" << endl;
//		}
//		else {
//			sideflag = 1;
//		}
//		if (a*a + c*c == b*b || a*a + b*b == c*c || b*b + a*a == c*c) {
//			cout << "��������һ��ֱ��������" << endl;
//		}
//		else if (sideflag == 1) {
//			cout << "��������һ��һ��������" << endl;
//		}
//	}
//	else {
//		cout << "���ܹ���������" << endl;
//	}
//}

int main()
{
	int a, b, c;
	cout << "���������ߣ�" << endl;
	cin >> a >> b >> c;

	if (!a || !b || !c) {
		return 0;
	}
	else {
		Triangle tr(a, b, c);
		tr.isTriangle();
	}

    return 0;
}

