// 4-6.cpp : 定义控制台应用程序的入口点。
//

// CppProgrammingTask
// Author: takuron@github.com

#include "stdafx.h"

#include "Triangle-class.h"

//void fun(int a, int b, int c) {
//	if (a + b > c&&a + c > b&&b + c > a) {
//		int sideflag = 0;
//		cout << "能构成三角形";
//		if (a == b&&b == c) {
//			cout << ",并且是一个等边三角形" << endl;
//		}
//		else if (a == b || b == c || c == a) {
//			cout << "，并且是一个等腰三角形" << endl;
//		}
//		else {
//			sideflag = 1;
//		}
//		if (a*a + c*c == b*b || a*a + b*b == c*c || b*b + a*a == c*c) {
//			cout << "，并且是一个直角三角形" << endl;
//		}
//		else if (sideflag == 1) {
//			cout << "，并且是一个一般三角形" << endl;
//		}
//	}
//	else {
//		cout << "不能构成三角形" << endl;
//	}
//}

int main()
{
	int a, b, c;
	cout << "请输入三边：" << endl;
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

