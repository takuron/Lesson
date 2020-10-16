#pragma once

#include "ex2-2.h"



// ex2-2-2.cpp
// CppProgrammingTask
// Author: takuron@github.com

Rhombus::Rhombus(int s1, int s2)
{
	l1 = s1;
	l2 = s2;
}

double Rhombus::area() {
	return 1.0*l1*l2 / 2;
}

double Rhombus::perimeter() {
	return  hypot(l1 / 2, l2 / 2) * 4;
}
void Rhombus::print() {
	cout << "菱形周长：" << perimeter() << " 菱形面积：" << area() << endl;
}


Triangle::Triangle(int a, int b, int c)
{
	x = a;
	y = b;
	z = c;
}

int Triangle::perimeter() {
	return x + y + z;
}

double Triangle::area() {
	double p = 1.0*perimeter() / 2;
	return sqrt(p*(p - x)*(p - y)*(p - z));
}
void Triangle::print() {
	cout << " 三角形周长：" << perimeter() << " 三角形面积：" << area() << endl;
}
