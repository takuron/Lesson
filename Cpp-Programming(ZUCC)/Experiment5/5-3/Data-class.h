#pragma once

#include "stdafx.h"

class Data
{
public:
	Data(int,int,int);
	void data1() {
		cout << year << "��" << month << "��" << day << "��" << endl;
	}
	void data2(int y) {
		cout << y << "��" << month << "��" << day << "��" << endl;
	}
	void data3(int y,int m) {
		cout << y << "��" << m << "��" << day << "��" << endl;
	}
	void data4(int y, int m,int d) {
		cout << y << "��" << m << "��" << d << "��" << endl;
	}

private:
	int year, month, day;
};

Data::Data(int y = 2014, int m = 12,int d = 10)
{
	year = y;
	month = m;
	day = d;
}