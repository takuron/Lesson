#include "people-class.h"

// CppProgrammingTask
// Author: takuron@github.com

Peopple::Peopple(int m1, int m2)
{
	money1 = m1;
	money2 = m2;
}

int Peopple::operator+(const Peopple p2)
{
	return (money1 + money2)*(money1 + money2) + (p2.money1 + p2.money2)*(p2.money1 + p2.money2);
}

int Peopple::operator-(const Peopple p2)
{
	return (money1 - money2)*(money1 - money2) - (p2.money1 - p2.money2)*(p2.money1 - p2.money2) - 2 * money1*p2.money2 - 2 * money2*p2.money1;
}
