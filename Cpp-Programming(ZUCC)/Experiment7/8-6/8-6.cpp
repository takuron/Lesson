// 8-6.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

int** array2d(int x, int y);


int main()
{
	int** a;

	a = array2d(6, 6);

	for (int i = 0; i < 6; i++) {
		cout << "�������" << i + 1 << "�е�6��Ԫ��" << endl;
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

	cout << "���ֵ��" << max << "��λ�ã�" << mx << "��" << my << endl;

    return 0;
}

//��ά����Ķ�̬�����ʼ��

int** array2d(int x, int y) {
	int *(*(arr));

	arr = new int*[x];

	for (int i = 0; i < x; i++) {
		arr[i] = new int[y];
	}

	return arr;
}

