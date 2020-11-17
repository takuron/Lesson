// 10-3.cpp : 定义控制台应用程序的入口点。
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

	cout << "猫咪年龄为：" << myCat.getAge() << endl;
    return 0;
}

