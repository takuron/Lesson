#pragma once

#include "stdafx.h"

class inve
{
public:
	inve(int x[]);
	void inv();
	void inv(int n);
	void print();

private:
	int a[10];
};

inve::inve(int x[])
{
	int i;
	for (i = 0; i < 10; i++) {
		a[i] = x[i];
	}
}

void inve::inv() {
	int i = 9;
	for (i = 9; i >= 0; i--) {
		cout << a[i] << " ";
	}
	cout << endl;
}

void inve::inv(int n) {
	int i = 9;
	for (i = 9; i >= (10-n); i--) {
		cout << a[i] << " ";
	}
	cout << endl;
}

void inve::print() {
	int i;
	for (i = 0; i < 10; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}