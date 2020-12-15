#include "class.h"

Convert::Convert(double in)
{
	init = in;
}

double Convert::getInit()
{
	return init;
}

double Convert::getConv()
{
	return conv;
}

Kg_to_G::Kg_to_G(double in):Convert(in)
{
}

void Kg_to_G::compute()
{
	conv = init * 1000;
}

F_to_C::F_to_C(double in):Convert(in)
{
}

void F_to_C::compute()
{
	conv = (init - 32) / 1.8;
}
