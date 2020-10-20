#pragma once

#include "stdafx.h"

class Triangle
{
public:
	Triangle(int x,int y,int z);

	int isTriangle() {
		if (a + b > c&&a + c > b&&b + c > a) {
			int sideflag = 0;
			cout << "能构成三角形";
			if (a == b&&b == c) {
				cout << ",并且是一个等边三角形" << endl;
			}
			else if (a == b || b == c || c == a) {
				cout << "，并且是一个等腰三角形" << endl;
			}
			else {
				sideflag = 1;
			}
			if (a*a + c*c == b*b || a*a + b*b == c*c || b*b + a*a == c*c) {
				cout << "，并且是一个直角三角形" << endl;
			}
			else if (sideflag == 1) {
				cout << "，并且是一个一般三角形" << endl;
			}
			return 1;
		}
		else {
			cout << "不能构成三角形" << endl;

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
