// 10-6.cpp : ��������̨Ӧ�ó��������ڵ㡣
//
// CppProgrammingTask
// Author: takuron@github.com

#include "stdafx.h"

class myData
{
public:
	myData(int y,int m,int d);//��3������
	void print();

private:
	int year, month, day;
};

myData::myData(int y=2012, int m=01, int d=01)
{
	year = y;
	month = m;
	day = d;
}

void myData::print() {
	cout << "������" << year << "��" << month << "��" << day << "��" << endl;
}



int main()
{
	myData A(2012, 5, 15), B(2013);//��2������
	A.print();
	B.print();
    return 0;
}
