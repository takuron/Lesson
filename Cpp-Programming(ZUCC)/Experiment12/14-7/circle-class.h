#pragma once

// CppProgrammingTask
// Author: takuron@github.com

#include "stdafx.h"
class Circle
{
public:
	Circle(int r);
	~Circle();

	double area();

	virtual double volum()=0;

protected:
	int radiu;
};

class Cylinder : virtual public Circle
{
public:
	Cylinder(int h,int r);
	~Cylinder();

	double volum();

protected:
	int height;
};

class Sphere : virtual public Circle {
public:
	Sphere(int r);

	double volum();
};
