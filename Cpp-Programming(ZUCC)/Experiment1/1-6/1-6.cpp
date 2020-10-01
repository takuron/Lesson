// 1-6.cpp : 定义控制台应用程序的入口点。
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
		cout << "学生姓名为：" << name << "年龄：" << age << "住址："<< location <<endl;
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

