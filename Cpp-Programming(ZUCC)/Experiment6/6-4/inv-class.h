#pragma once

#include "stdafx.h"

class Inv
{
public:
	Inv(int x[]);
	void inve();
	void print();

private:
	int a[10];
};

Inv::Inv(int x[])
{
	int i;
	for (i = 0; i < 10; i++) {
		a[i] = x[i];
	}
}

void Inv::inve() {
	int temp = 0;
	int i;
	for (i = 0; i < 5; i++) {
		temp = a[i];
		a[i] = a[9-i];
		a[9-i] = temp;
	}
}

void Inv::print() {
	int i;
	for (i = 0; i < 10; i++) {
		cout << setw(5) << a[i];
	}
	cout << endl;
}
