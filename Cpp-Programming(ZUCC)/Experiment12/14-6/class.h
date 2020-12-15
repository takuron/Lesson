#pragma once

#include "stdafx.h"

// CppProgrammingTask
// Author: takuron@github.com

class Convert
{
public:
	Convert(double in);
	double getInit();
	double getConv();

	virtual void compute() = 0;

protected:
	double init;
	double conv;

};

class Kg_to_G : public Convert
{
public:
	Kg_to_G(double in);

	void compute();
private:

};

class F_to_C : public Convert {
public:
	F_to_C(double in);

	void compute();
};