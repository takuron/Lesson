// 14-6.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "class.h"

void mShow(Convert* c) {
	c->compute();
	cout << "���Ϊ��" << c->getConv() << endl;
}

int main()
{
	int flag;
	cout << "��ѡ����Ҫ�����㣬1Ϊ������2Ϊ�¶�" << endl;
	cin >> flag;
	if (flag == 1) {
		int init;
		cout << "��������������λǧ��" << endl;
		cin >> init;
		Kg_to_G mc(init);
		mShow(&mc);
	}
	else if (flag == 2) {
		int init;
		cout << "�������¶ȣ���λΪ�H" << endl;
		cin >> init;
		F_to_C mc(init);
		mShow(&mc);
	}
	else {
		cout << "�������" << endl;
	}
    return 0;
}

