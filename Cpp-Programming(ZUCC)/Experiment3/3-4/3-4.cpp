// 3-4.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "FactorialSum-class.h"


int main()
{
	int a;
	cin >> a;
	FactorialSum fs(a);
	fs.print();
    return 0;
}

