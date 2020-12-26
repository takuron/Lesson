#pragma once

#include "stdafx.h"
#include "ConfItems.h"

template<typename T>
class ConfSection
{
public:
	ConfSection(string name);

	int removeItem(string key);


protected:
	string name;
};


