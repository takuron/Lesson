// 11-2.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "PersonClass.h"


int main()
{
	Person bob("Bob", 0), alice("Alice", 0), dan("Dan", 0), sam("Sam", 0);

	bob.giveMoney(1000);
	alice.giveMoney(500);
	dan.giveMoney(2000);
	sam.giveMoney(1800);

	Person::printMoney();

    return 0;
}

