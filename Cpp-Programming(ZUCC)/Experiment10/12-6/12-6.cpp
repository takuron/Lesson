// 12-6.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "people-class.h"


int main()
{
	int a1, a2;
	cout << "请设置第一个人的参数" << endl;
	cin >> a1 >> a2;

	int b1, b2;
	cout << "请设置第二个人的参数" << endl;
	cin >> b1 >> b2;

	Peopple A(a1, a2), B(b1, b2);

	int flag;
	cout << "请设置二人关系，1为和谐，2为不和谐" << endl;
	cin >> flag;


	if (flag == 1) {
		cout << "资产为：" << A + B << endl;
	}
	else if (flag == 2) {
		cout << "资产为：" << A - B << endl;
	}

    return 0;
}

