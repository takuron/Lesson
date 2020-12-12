// 13-4.cpp : ��������̨Ӧ�ó��������ڵ㡣
//

// CppProgrammingTask
// Author: takuron@github.com

#include "stdafx.h"

class A
{
public:
	A(int i) {
		a = i;
		cout << "Constryctor called A" << endl;
	}
	~A() {
		cout << "Destructor called A" << endl;
	}

	void print() {
		cout << a << ",";
	}
	int getA() {
		return a;
	}

protected:
	int a;
};

class B :public A {
private:
	int b;
	A aa;
public:
	B(int i, int j, int k) :A(i), aa(j) {
		b = k;
		cout << "Constryctor called B" << endl;
	}
	~B() {
		cout << "Destructor called A" << endl;
	}

	void print() {
		A::print();
		cout << b << "," << aa.getA() << endl;
	}
};

int main()
{
	B bb1(3, 4, 5);
	bb1.print();
    return 0;
}
