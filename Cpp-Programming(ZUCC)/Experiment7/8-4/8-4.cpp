// 8-4.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "maxmin.h"


int main()
{
	int size;
	cout << "请输入数组元素数量：" << endl;
	cin >> size;

	int p[80];
	cout << "请输入数组元素：" << endl;

	for (int i = 0; i < size; i++) {
		cin >> p[i];
	}

	int max, min;

	maxmin(size, p, &max, &min);

	cout << "最大值：" << max << " 最小值：" << min << endl;


    return 0;
}

