#pragma once

#include "stdafx.h"

class Triangle
{
public:
	Triangle(int x,int y,int z);

	int isTriangle() {
		if (a + b > c&&a + c > b&&b + c > a) {
			int sideflag = 0;
			cout << "�ܹ���������";
			if (a == b&&b == c) {
				cout << ",������һ���ȱ�������" << endl;
			}
			else if (a == b || b == c || c == a) {
				cout << "��������һ������������" << endl;
			}
			else {
				sideflag = 1;
			}
			if (a*a + c*c == b*b || a*a + b*b == c*c || b*b + a*a == c*c) {
				cout << "��������һ��ֱ��������" << endl;
			}
			else if (sideflag == 1) {
				cout << "��������һ��һ��������" << endl;
			}
			return 1;
		}
		else {
			cout << "���ܹ���������" << endl;

			return 0;
		}
	}
private:
	int a, b, c;
};

Triangle::Triangle(int x, int y, int z)
{
	a = x; b = y; c = z;
}
