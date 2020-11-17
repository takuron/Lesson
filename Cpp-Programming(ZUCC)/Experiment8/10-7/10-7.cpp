
// 10-7.cpp : ��������̨Ӧ�ó��������ڵ㡣
//
// CppProgrammingTask
// Author: takuron@github.com

#include "stdafx.h"

class Person
{
public:
	Person(const Person &me);
	Person(char *p, int a);
	void Display();

private:
	char *buffer;
	int age;
};

Person::Person(const Person & me)
{
	buffer = new char[strlen(me.buffer) + 1];
	strcpy(buffer, me.buffer);
	this->age = me.age + 1;//��2��
}

Person::Person(char *p, int a)
{
	buffer = new char[strlen(p) + 1];
	strcpy(buffer, p);
	age = a;
}

void Person::Display()
{
	cout << "The name is " << buffer << " age is " << age << endl;
}


int main()
{
	Person A("Liu", 50);
	Person B(A);
	B.Display();
    return 0;
}
