#pragma once

#include "stdafx.h"

class Addn_m
{
public:
	Addn_m(int a, int b) { m = a; n = b; };
	double Add() {
		int i;
		double sum=0;
		for (i = n; i <= m; i++) {
			sum = sum + (1.0 / i);
		}
		return sum;
	}
	void print() {
		cout << "½á¹ûÎª£º" << Add() << endl;

	}

private:
	int m, n;
};