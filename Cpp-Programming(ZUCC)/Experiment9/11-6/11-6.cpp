// 11-6.cpp : ��������̨Ӧ�ó��������ڵ㡣
//
// CppProgrammingTask
// Author: takuron@github.com

#include "stdafx.h"

class Data
{
public:
	Data(int year,int month, int day);
	~Data();
	int getYear() {
		return y;
	}
	int getMonth() {
		return m;
	}
	int getDay() {
		return d;
	}
private:
	int y, m, d;
};

Data::Data(int year, int month, int day)
{
	y = year;
	m = month;
	d = day;
}

Data::~Data()
{
}

class Person
{
public:
	Person(char* name, char* sex, int by,int bm,int bd);
	~Person();
	void print();

private:
	char name[8];
	char sex[3];
	Data born;
};

Person::Person(char* n, char* s, int by, int bm, int bd):born(by, bm, bd) {
	strcpy(name, n);
	strcpy(sex, s);

}

Person::~Person()
{
}

void Person::print()
{
	cout << "������" << name << " �Ա���" << sex << " �������ڣ�" <<born.getYear()<<"/"<<born.getMonth()<<"/"<<born.getDay()<< endl;
}


int main()
{
	Person p("����", "��", 2019, 1, 1);

	p.print();

    return 0;
}
