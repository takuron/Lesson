// 11-5.cpp : ��������̨Ӧ�ó��������ڵ㡣
//
// CppProgrammingTask
// Author: takuron@github.com

#include "stdafx.h"


class B;

class A
{
public:
	A(int v);
	~A();
	friend int Same_Value(A &a, B &b);

private:
	int value1;
};

A::A(int v)
{
	value1 = v;
}

A::~A()
{
}

class B
{
public:
	B(int v);
	~B();
	friend int Same_Value(A &a, B &b);

private:
	int value2;
};

B::B(int v)
{
	value2 = v;
}

B::~B()
{
}

int Same_Value(A &a, B &b) {
	return a.value1 == b.value2;
}

int main()
{
	int va, vb;

	cout << "������A����ֵ" << endl;
	cin >> va;
	cout << "������B����ֵ" << endl;
	cin >> vb;

	A a(va);
	B b(vb);

	if (Same_Value(a, b)) {
		cout << "����" << endl;
	}
	else {
		cout << "������" << endl;
	}


    return 0;
}
