// 8-6.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

int** array2d(int x, int y);


int main()
{
	int** a;

	a = array2d(6, 6);

	for (int i = 0; i < 6; i++) {
		cout << "请输入第" << i + 1 << "行的6个元素" << endl;
		for (int ii = 0; ii < 6; ii++) {
			cin >> a[i][ii];
		}
	}

	int max = INT32_MIN;
	int mx, my;

	for(int i = 0; i < 6; i++) {
		for (int ii = 0; ii < 6; ii++) {
			if (a[i][ii] > max) {
				max = a[i][ii];
				mx = i;
				my = ii;
			}
		}
	}

	cout << "最大值：" << max << "，位置：" << mx << "，" << my << endl;

    return 0;
}

//二维数组的动态分配初始化

int** array2d(int x, int y) {
	int *(*(arr));

	arr = new int*[x];

	for (int i = 0; i < x; i++) {
		arr[i] = new int[y];
	}

	return arr;
}

