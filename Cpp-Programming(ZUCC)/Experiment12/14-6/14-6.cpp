// 14-6.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "class.h"

void mShow(Convert* c) {
	c->compute();
	cout << "结果为：" << c->getConv() << endl;
}

int main()
{
	int flag;
	cout << "请选择需要的运算，1为重量，2为温度" << endl;
	cin >> flag;
	if (flag == 1) {
		int init;
		cout << "请输入重量，单位千克" << endl;
		cin >> init;
		Kg_to_G mc(init);
		mShow(&mc);
	}
	else if (flag == 2) {
		int init;
		cout << "请输入温度，单位为℉" << endl;
		cin >> init;
		F_to_C mc(init);
		mShow(&mc);
	}
	else {
		cout << "输入错误" << endl;
	}
    return 0;
}

