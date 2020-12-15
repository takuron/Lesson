#include "circle-class.h"

Circle::Circle(int r)
{
	radiu = r;
}

Circle::~Circle()
{
}

double Circle::area()
{
	double pi = 3.14;
	return pi*radiu*radiu;
}

Cylinder::Cylinder(int h, int r):Circle(r)
{
	height = h;
}

Cylinder::~Cylinder()
{
}

double Cylinder::volum()
{
	return height*area();
}

Sphere::Sphere(int r):Circle(r)
{
}

double Sphere::volum()
{
	return (4 / 3)*3.14*radiu*radiu*radiu;
}
