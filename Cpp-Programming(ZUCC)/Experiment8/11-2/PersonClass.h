#pragma once

#include "stdafx.h"

// CppProgrammingTask
// Author: takuron@github.com

class Person
{
public:
	Person(char* n,int m);
	void giveMoney(int m);
	static void printMoney();

private:
	int money;
	char* name;

	static int fatheer_money;
};

void Person::giveMoney(int m)
{
	money = money + m;

	fatheer_money = fatheer_money - m;


}

Person::Person(char* n, int m) {
	name = new char[strlen(n) + 1];
	strcpy(name, n);
	money = m;
}

int Person::fatheer_money = 10000;

void Person::printMoney() {
	cout << "rest is " << fatheer_money << endl;
}
