// 1-5.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>
using namespace std;

class cube{
private:
	int x, y, z;
public:
	cube(int a, int b, int c){
		x = a;
		y = b;
		z = c;
	}
	int volum();
	void show();
};

int cube::volum() {
	return x*y*z;
}

void cube::show() {
	cout << "���������" << volum() << endl;
}



int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	cube x(a, b, c);

	x.show();


	return 0;
}


