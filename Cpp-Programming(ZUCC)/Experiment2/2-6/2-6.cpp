// 2-6.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "ex2-2-2.h"



int main()
{
	int type,aa,bb,cc;
	cout << "��ѡ��������ͣ�" << endl;
	cout << "1.������" << endl;
	cout << "2.����" << endl;
	cin >> type;

	if (type == 1) {
		cout << "���������߳���" << endl;
		cin >> aa >> bb >> cc;

		Triangle t1(aa, bb, cc);
		t1.print();
	}
	else if (type == 2) {
		cout << "���������Խ��߳�" << endl;
		cin >> aa >> bb;

		Rhombus r1(aa, bb);
		r1.print();
	}
	else {
		cout << "�������" << endl;
	}

    return 0;
}

