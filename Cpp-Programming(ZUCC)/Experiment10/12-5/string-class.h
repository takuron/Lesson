#pragma once

#include "stdafx.h"

class myString
{
public:
	myString();
	myString(const char*);
	~myString();

	void display();

	myString& operator + (const myString&);
	myString& operator - (const myString&);

private:
	char *str;
};