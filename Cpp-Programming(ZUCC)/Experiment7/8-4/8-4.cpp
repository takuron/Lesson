// 8-4.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "maxmin.h"


int main()
{
	int size;
	cout << "����������Ԫ��������" << endl;
	cin >> size;

	int p[80];
	cout << "����������Ԫ�أ�" << endl;

	for (int i = 0; i < size; i++) {
		cin >> p[i];
	}

	int max, min;

	maxmin(size, p, &max, &min);

	cout << "���ֵ��" << max << " ��Сֵ��" << min << endl;


    return 0;
}

