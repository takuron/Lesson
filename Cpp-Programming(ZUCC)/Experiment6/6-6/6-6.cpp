// 6-6.cpp : 定义控制台应用程序的入口点。
// CppProgrammingTask
// Author: takuron@github.com
//

#include "stdafx.h"
#include "arraytool-class.h"


int main()
{
	int size;

	cout << "输入不大于80的数组大小" << endl;
	cin >> size;

	if (size > 80 || size <= 0){
		cout << "数组大小非法" << endl;
		return 0;
	}

	cout << "请输入数组" << endl;
	
	int arr[80];
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}

	ArrayTool arrt(arr);
	int num;

	cout << "请输入查询的数字" << endl;
	cin >> num;

	cout << "共找到:" << arrt.timeOfItem(num) << "个" << endl;


    
}

