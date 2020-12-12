// 13-2.cpp : ��������̨Ӧ�ó��������ڵ㡣
//

// CppProgrammingTask
// Author: takuron@github.com

#include "stdafx.h"

class Time {
protected:
	int hours, minutes, seconds;
public:
	Time(int h, int m, int s) {
		hours = h;
		minutes = m;
		seconds = s;

		cout << "Time build" << endl;
	}
	virtual void display() {
		cout << hours << ":" << minutes << ":" << seconds << endl;
	}

};

class Date
{
protected:
	int month, day, year;
public:
	Date(int m, int d, int y) {
		month = m;
		day = d;
		year = y;

		cout << "Date build" << endl;
	}
	virtual void display() {
		cout << month << "/" << day << "/" << year;
	}
};

class Birthtime : public Date, public Time {
protected:
	char Childname[20];

public:
	Birthtime(char *Cn, int mm, int dd, int yy, int hh, int mint, int ss) : Date(mm, dd, yy), Time(hh, mint, ss) {
		strcpy(Childname, Cn);

		cout << "Birthtime build" << endl;
	}
	void display() {
		cout << Childname << ' ';
		Date::display();
		cout << endl;
		Time::display();
	}
};

int main()
{
	Birthtime yx("Yuanxing", 10, 27, 1996, 13, 20, 0);
	yx.display();
    return 0;
}
