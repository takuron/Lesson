// 6-4.cpp : 定义控制台应用程序的入口点。

// CppProgrammingTask
// Author: takuron@github.com
//

#include "stdafx.h"
#include "inv-class.h"
#include "stv-class.h"


int main()
{
	/*int x[10];
	for (int i = 0; i < 10; i++) {
		cin >> x[i];
	}

	Inv inv(x);
	inv.print();
	inv.inve();
	inv.print();*/

	char x[11];
	cin >> x;

	Stv stv(x);
	stv.print();
	stv.inve();
	stv.print();
    return 0;
}

