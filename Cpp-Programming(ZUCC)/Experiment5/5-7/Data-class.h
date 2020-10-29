#pragma once

#include "stdafx.h"

// CppProgrammingTask
// Author: takuron@github.com

class Data
{
public:
	Data(int);
	void print() {
		int a = x;
		show(a);
	}

private:
	int x;
	//二进制
	/*void show(int a) {
		if (a >= 2) {
			show(a / 2);
		}
		cout << a % 2;
	}*/
	//八进制
	/*void show(int a) {
		if (a >= 8) {
			show(a / 8);
		}
		cout << a % 8;
	}*/
	//16进制
	void show(int a) {
		if (a >= 16) {
			show(a / 16);
		}

		int s = a % 16;

		switch (s) {
		case 10:
			cout << "A";
			break;
		case 11:
			cout << "B";
			break;
		case 12:
			cout << "C";
			break;
		case 13:
			cout << "D";
			break;
		case 14:
			cout << "E";
			break;
		case 15:
			cout << "F";
			break;
		default:
			cout << a % 16;
			break;
		}
	}
};

Data::Data(int xx)
{
	x = xx;
}
