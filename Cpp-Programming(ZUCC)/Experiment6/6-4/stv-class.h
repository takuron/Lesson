#pragma once

// CppProgrammingTask
// Author: takuron@github.com

#include "stdafx.h"

class Stv
{
public:
	Stv(char x[]);
	void inve();
	void print();

private:
	char a[11];
};

Stv::Stv(char x[])
{
	int i;
	for (i = 0; i < 10; i++) {
		a[i] = x[i];
	}
	a[10] = '\0';
}

void Stv::inve() {
	char temp;
	int i;
	for (i = 0; i < 5; i++) {
		temp = a[i];
		a[i] = a[9 - i];
		a[9 - i] = temp;
	}

}

void Stv::print() {
	cout << a;
	cout << endl;
}

