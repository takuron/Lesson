

#include "rectangle-class.h"

Rectangle::Rectangle(int l, int w)
{
	length = l;
	width = w;
}

int Rectangle::area()
{
	return length*width;
}

Cubiod::Cubiod(int l, int w, int h):Rectangle(l,w)
{
	height = h;
}

int Cubiod::volum()
{
	return height*area();
}
