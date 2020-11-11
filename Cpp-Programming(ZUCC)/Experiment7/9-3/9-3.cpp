// 9-3.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "function.h"


int main()
{
	int x;
	cin >> x;
	double(*p)(double x);

	if (x < 0) {
		p = f1;
	}
	else if (x < 5) {
		p = f2;
	}
	else
	{
		p = f3;
	}


	cout << (*p)(x) << endl;


    return 0;
}

