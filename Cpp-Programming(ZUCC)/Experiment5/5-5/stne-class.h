#pragma once

#include "stdafx.h"

// CppProgrammingTask
// Author: takuron@github.com


class stne
{
public:
	stne(char x[]);
	void inv();
	void inv(int n);
	void print();

private:
	char a[10];
};

stne::stne(char x[])
{
	int i;
	for (i = 0; i < 10; i++) {
		a[i] = x[i];
	}
}

void stne::inv() {
	int i;
	for (i = 8; i >= 0; i--) {
		cout << a[i];
	}
	cout << endl;
}

void stne::inv(int n) {
	int i;
	for (i = 8; i >= (9 - n); i--) {
		cout << a[i];
	}
	cout << endl;
}

void stne::print() {
	int i;
	for (i = 0; a[i] != '\0'; i++) {
		cout << a[i] ;
	}
	cout << endl;
}