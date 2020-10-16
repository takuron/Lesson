// 2-6.cpp : 定义控制台应用程序的入口点。
//

#include "ex2-2-2.h"



int main()
{
	int type,aa,bb,cc;
	cout << "请选择计算类型：" << endl;
	cout << "1.三角形" << endl;
	cout << "2.菱形" << endl;
	cin >> type;

	if (type == 1) {
		cout << "请输入三边长度" << endl;
		cin >> aa >> bb >> cc;

		Triangle t1(aa, bb, cc);
		t1.print();
	}
	else if (type == 2) {
		cout << "请输入两对角线长" << endl;
		cin >> aa >> bb;

		Rhombus r1(aa, bb);
		r1.print();
	}
	else {
		cout << "输入错误" << endl;
	}

    return 0;
}

