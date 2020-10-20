#pragma once

#include "stdafx.h"

class Funroot
{
public:
	Funroot(float a, float b);
	float root() {
		float middle, ym, yl, yr;
		do {
			yl = f(left);
			yr = f(right);
		} while (yl*yr > 0);
		do {
			middle = (right + left) / 2;
			ym = f(middle);
			if (yr*ym > 0) {
				right = middle;
				yr = ym;
			}
			else {
				left = middle;
				yl = ym;
			}
		} while (fabs(ym) >= 1e-6);
		return middle;
	}
private:
	float f(float x);
	float left, right;
};

Funroot::Funroot(float a,float b)
{
	left = a;
	right = b;
}

//float Funroot::f(float x) {
//	return 2 * x*x*x - 2 * x*x - 6 * x - 3;
//}

float Funroot::f(float x) {
	return x*x - 2 * x - 6;
}
