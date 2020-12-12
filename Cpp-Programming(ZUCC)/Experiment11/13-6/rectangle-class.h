#pragma once

// CppProgrammingTask
// Author: takuron@github.com

class Rectangle
{
public:
	Rectangle(int l,int w);

	int area();

protected:
	int length, width;
};

class Cubiod : public Rectangle
{
public:
	Cubiod(int l, int w , int h);

	int volum();

protected:
	int height;
};
