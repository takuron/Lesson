// 9-5.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"


int main(int argc, char *argv[])
{
	char c;
	if (argc != 3) {
		cout << "�������" << endl;
	}
	else {
		c = *argv[1];
		switch (c)
		{
		case '+':
			cout << "ִ�м��ܳ����" << endl;
			break;
		case '-':
			cout << "ִ�н��ܳ����" << endl;
			break;
		default:
			cout << "��������" << endl;
			break;
		}
	}
    return 0;
}

