#pragma once

#include "stdafx.h"

class Peopple
{
public:
	Peopple(int m1,int m2);

	int operator + (const Peopple p2);
	int operator - (const Peopple p2);


private:
	int money1, money2;
};
