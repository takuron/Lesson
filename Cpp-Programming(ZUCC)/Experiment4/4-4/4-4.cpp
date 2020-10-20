// 4-4.cpp : 定义控制台应用程序的入口点。
//

// CppProgrammingTask
// Author: takuron@github.com

#include "stdafx.h"
#include "Funroot-class.h"

//float f(float x) {
//	return 2 * x*x*x - 2 * x*x - 6 * x - 3;
//}
//
//int main()
//{
//	float left, right, middle, ym, yl, yr;
//	do {
//		cout << "请输入左、右边界" << endl;
//		cin >> left >> right;
//		yl = f(left);
//		yr = f(right);
//	} while (yl*yr > 0);
//	do {
//		middle = (right + left) / 2;
//		ym = f(middle);
//		if (yr*ym > 0) {
//			right = middle;
//			yr = ym;
//		}
//		else {
//			left = middle;
//			yl = ym;
//		}
//	} while (fabs(ym) >= 1e-6);
//	cout << "\n方程根为：" << middle << endl;
//	return 0;
//}

int main() {
	float le, ri;
	cout << "请输入左、右边界" << endl;
	cin >> le >> ri;
	
	Funroot fr(le, ri);
	
	cout << "\n方程的根是：" << fr.root() << endl;
	return 0;
}

