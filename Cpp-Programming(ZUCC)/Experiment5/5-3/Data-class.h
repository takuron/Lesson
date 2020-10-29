#pragma once

#include "stdafx.h"

class Data
{
public:
	Data(int,int,int);
	void data1() {
		cout << year << "年" << month << "月" << day << "日" << endl;
	}
	void data2(int y) {
		cout << y << "年" << month << "月" << day << "日" << endl;
	}
	void data3(int y,int m) {
		cout << y << "年" << m << "月" << day << "日" << endl;
	}
	void data4(int y, int m,int d) {
		cout << y << "年" << m << "月" << d << "日" << endl;
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