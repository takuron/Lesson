#pragma once

#include "stdafx.h"
#include "ConfItems.h"

class ConfSection
{
public:
	ConfSection(string key);
	ConfSection(string key, string sVals);

	string getKey();
	int getSectionSize(); 
	
	vector<ConfItem> getConfItemList();
	ConfItem getConfItem(int i);

	void addItem(ConfItem mItem);
	void changeItem(int i,ConfItem mItem);
	void deleteItem(int i);

	ConfSection(const ConfSection& mSection);

protected:
	string key;
	vector<ConfItem> vals;

};
