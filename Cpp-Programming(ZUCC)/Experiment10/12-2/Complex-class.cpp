#pragma once

// CppProgrammingTask
// Author: takuron@github.com

#include "Complex-class.h"

complex::complex(double a, double b)
{
	x = a;
	y = b;
}

complex::complex()
{
	x = 0;
	y = 0;
}

complex::~complex()
{
}

complex complex::operator+(const complex &se) {
	return complex(x + se.x, y + se.y);
}

complex complex::operator-(const complex &se) {
	return complex(x - se.x, y - se.y);
}

complex complex::operator*(const complex &se) {
	return complex(x * se.x, y * se.y);
}

complex complex::operator/(const complex &se) {
	return complex(x / se.x, y / se.y);
}

complex operator+(double a, const complex & x)
{
	return complex(a+x.x,x.y);
}

complex operator-(double a, const complex & x)
{
	return complex(a-x.x,x.y);
}

complex operator*(double a, const complex & x)
{
	return complex(a*x.x,a*x.y);
}

complex operator/(double a, const complex & x)
{
	return complex();
}

ostream & operator<<(ostream& output , complex& c)
{
	output << "(" << c.x << "," << c.y << ")" << endl;
	return output;
}
