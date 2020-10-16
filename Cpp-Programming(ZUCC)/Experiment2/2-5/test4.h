#pragma once

#include <iostream>

using namespace std;

class datas
{
public:
	datas(int a,int b) {
		x = a; y = b;
	}

	void gt() {
		cout << x << '>' << y << '=' << (x > y) << endl;
	}
	void lt() {
		cout << x << '<' << y << '=' << (x < y) << endl;
	}
	void ge() {
		cout << x << ">=" << y << '=' << (x >= y) << endl;
	}
	void eq() {
		cout << x << "==" << y << '=' << (x == y) << endl;
	}
	void and() {
		cout << x << '&' << y << '=' << (x && y) << endl;
	}
	void or() {
		cout << x << '|' << y << '=' << (x || y) << endl;
	}

	void print() {
		gt();
		lt();
		ge();
		eq();
		and ();
		or ();
	}

private:
	int x, y;

};