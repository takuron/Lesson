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

protected:
	int radiu;
};

class Cylinder : public Circle
{
public:
	Cylinder(int h,int r);
	~Cylinder();

	double volum();

protected:
	int height;
};

class Sphere : public Circle {
public:
	Sphere(int r);

	double volum();
};
