// 5-5.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "inve-class.h"
#include "stne-class.h"

// CppProgrammingTask
// Author: takuron@github.com


int main()
{
	/*int x[10];
	for (int i = 0; i < 10; i++) {
		cin >> x[i];
	}

	inve A(x);
	A.print();
	A.inv();

	int n;
	cin >> n;
	A.inv(n);
	A.print();*/

	char s[10];

	cin >> s;

	stne sn(s);

	sn.print();
	sn.inv();

	int n;
	cin >> n;
	sn.inv(n);

    return 0;
}

