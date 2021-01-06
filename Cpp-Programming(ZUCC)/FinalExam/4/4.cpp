// 4.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

class Count {
private:
	int a, b, c;
public:
	Count(int aa, int bb, int cc) {
		a = aa;
		b = bb;
		c = cc;
	};

	double count1() {
		if (a == 0) {
			throw 1;
		}
		if ((b*b - 4 * a*c) < 0) {
			throw 2;
		}
		else {
			return ((0.0 - b) + sqrt(b*b - 4 * a*c)) / (2*a);
		}
	};
	double count2() {
		if (a == 0) {
			throw 1;
		}
		if ((b*b - 4 * a*c) < 0) {
			throw 2;
		}
		else {
			return ((0.0 - b) - sqrt(b*b - 4 * a*c)) / (2 * a);
		}
	};
	void print() {
		try
		{
			double r1 = count1();
			double r2 = count2();

			cout << "结果为：" << r2 << " " << r2 << endl;
		}
		catch (int i)
		{
			if (i == 1) {
				cout << "除数为零" << endl;
			}
			else if (i == 2) {
				cout << "开负数根号" << endl;
			}
		}
	};
};


int main()
{
	int a, b, c;
	cout << "请输入a，b，c" << endl;
	cin >> a >> b >> c;

	Count c1(a, b, c);

	c1.print();
    return 0;
}

