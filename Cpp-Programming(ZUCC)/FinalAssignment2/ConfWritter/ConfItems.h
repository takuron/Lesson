#pragma once

#include "stdafx.h"

class ConfItem
{
public:
	ConfItem(string key,string val);
	ConfItem(string key);

	ConfItem(const ConfItem& mFile);

	void setKey(string key);
	void setVal(string val);

	string getKey();
	string toString();

protected:
	string key;
	string val;

};