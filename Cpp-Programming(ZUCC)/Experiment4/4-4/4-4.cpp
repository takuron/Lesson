// 4-4.cpp : �������̨Ӧ�ó������ڵ㡣
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
//		cout << "���������ұ߽�" << endl;
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
//	cout << "\n���̸�Ϊ��" << middle << endl;
//	return 0;
//}

int main() {
	float le, ri;
	cout << "���������ұ߽�" << endl;
	cin >> le >> ri;
	
	Funroot fr(le, ri);
	
	cout << "\n���̵ĸ��ǣ�" << fr.root() << endl;
	return 0;
}

