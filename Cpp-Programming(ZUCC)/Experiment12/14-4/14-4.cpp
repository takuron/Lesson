// 14-4.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "class.h"

void mShow(Person* p);

int main()
{
	int flag;
	cout << "��������Ա���ͣ�1Ϊ��ʦ��2Ϊѧ��" << endl;
	cin >> flag;
	if (flag == 1) {
		char mn[30];
		int num;
		cout << "����������" << endl;
		cin >> mn;
		cout << "������������" << endl;
		cin >> num;

		Teacher mt(mn, num);

		mShow(&mt);
	}
	else if (flag == 2) {
		char mn[30];
		int sc1,sc2,sc3;
		cout << "����������" << endl;
		cin >> mn;
		cout << "���������Ʒ���" << endl;
		cin >> sc1 >> sc2 >> sc3;
		Student mst(mn, sc1, sc2, sc3);
		mShow(&mst);
	}
	else {
		cout << "��������" << endl;
	}
    return 0;
}

void mShow(Person* p) {
	p->show();
}

