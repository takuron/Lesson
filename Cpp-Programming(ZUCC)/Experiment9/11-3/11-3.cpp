// 11-3.cpp : ��������̨Ӧ�ó��������ڵ㡣
//
// CppProgrammingTask
// Author: takuron@github.com

#include "stdafx.h"

class Point
{
public:
	Point(double xx,double yy);
	void getXy();
	friend double Distance(Point &a, Point &b);
	~Point();

private:
	double x, y;
};

Point::Point(double xx, double yy)
{
	x = xx;
	y = yy;
}

void Point::getXy()
{
	cout << "(" << x << "," << y << ")" << endl;
}

Point::~Point()
{
}


double Distance(Point &a, Point &b) {
	double dx = a.x - b.x;
	double dy = a.y - b.y;
	return sqrt(dx*dx + dy*dy);
}

int main()
{
	Point p1(3.0, 4.0), p2(6.0, 8.0);
	p1.getXy();
	p2.getXy();
	double d = Distance(p1, p2);
	cout << "Distance is " << d << endl;
    return 0;
}

//��1������
//��2��������
