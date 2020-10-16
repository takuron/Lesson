#pragma once

#include <iostream>

using namespace std;

class Triangle
{
public:
	Triangle(int a,int b,int c);
	int perimeter();
	double area();
	void print();

private:
	int x, y, z;
};

class Rhombus
{
public:
	Rhombus(int s1,int s2);
	double perimeter();
	double area();
	void print();

private:
	int l1, l2;
};



