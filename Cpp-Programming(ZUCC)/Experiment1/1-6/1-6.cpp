// 1-6.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

class student {
private:
	char name[20];
	int age;
	char location[80];
public:
	student(char n[], int a,char l[]) {
		strcpy(name, n);
		age = a;
		strcpy(location, l);
	}
	void show() {
		cout << "ѧ������Ϊ��" << name << "���䣺" << age << "סַ��"<< location <<endl;
	}
};


int main()
{
	char n[20];
	char l[80];
	int a;
	cin >> n >> a >> l;
	student AA(n, a, l);
	AA.show();
    return 0;
}

