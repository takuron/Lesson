#pragma once

#include "stdafx.h"

class FactorialSum
{
public:
	FactorialSum(int a) {
		m = a; 
	};
	int factorial(int num) {
		if (num == 0) {
			return 1;
		}
		else {
			int i;
			int sum = 1;
			for (i = 0; i <= num; i++) {
				sum = sum*i;
			}
			return sum;
		}
	}
	int sum() {
		int i;
		int sum = 0;
		for (i = 0; i <= m; i++) {
			sum = sum + factorial(i);
		}
		return sum;
	}
	void print() {
		cout << "½×³ËÖ®ºÍÎª£º" << sum()<< endl;

	}

private:
	int m;
};