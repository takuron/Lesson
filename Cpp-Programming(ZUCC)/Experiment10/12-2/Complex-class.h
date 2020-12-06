#pragma once

#include "stdafx.h"

class complex
{
public:
	complex(double a, double b);
	complex();
	~complex();
	complex operator+(const complex &x);
	complex operator-(const complex &x);
	complex operator*(const complex &x);
	complex operator/(const complex &x);

	friend complex operator +(double a, const complex &x);
	friend complex operator -(double a, const complex &x);
	friend complex operator *(double a, const complex &x);

	friend ostream& operator<<(ostream& output, complex& c);

private:
	double x, y;
};

