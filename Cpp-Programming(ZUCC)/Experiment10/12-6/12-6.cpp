// 12-6.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "people-class.h"


int main()
{
	int a1, a2;
	cout << "�����õ�һ���˵Ĳ���" << endl;
	cin >> a1 >> a2;

	int b1, b2;
	cout << "�����õڶ����˵Ĳ���" << endl;
	cin >> b1 >> b2;

	Peopple A(a1, a2), B(b1, b2);

	int flag;
	cout << "�����ö��˹�ϵ��1Ϊ��г��2Ϊ����г" << endl;
	cin >> flag;


	if (flag == 1) {
		cout << "�ʲ�Ϊ��" << A + B << endl;
	}
	else if (flag == 2) {
		cout << "�ʲ�Ϊ��" << A - B << endl;
	}

    return 0;
}

