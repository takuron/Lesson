// 10-3.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "CatClass.h"


int main()
{
	int weight, age;
	char color[10];

	cin >> weight;
	cin >> age;
	cin >> color;

	Cat myCat(color, age, weight);

	myCat.print();

	cout << "è������Ϊ��" << myCat.getAge() << endl;
    return 0;
}

