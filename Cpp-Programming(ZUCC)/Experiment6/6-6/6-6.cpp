// 6-6.cpp : �������̨Ӧ�ó������ڵ㡣
// CppProgrammingTask
// Author: takuron@github.com
//

#include "stdafx.h"
#include "arraytool-class.h"


int main()
{
	int size;

	cout << "���벻����80�������С" << endl;
	cin >> size;

	if (size > 80 || size <= 0){
		cout << "�����С�Ƿ�" << endl;
		return 0;
	}

	cout << "����������" << endl;
	
	int arr[80];
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}

	ArrayTool arrt(arr);
	int num;

	cout << "�������ѯ������" << endl;
	cin >> num;

	cout << "���ҵ�:" << arrt.timeOfItem(num) << "��" << endl;


    
}

