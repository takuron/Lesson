#pragma once

#include "stdafx.h"
#include "ConfItems.h"

class ConfSection
{
public:
	ConfSection(string key);

	string getKey();
	int getItemsSize(); 

	void setSectionKey(string name);
	
	vector<ConfItem> getConfItemList();
	ConfItem getConfItem(int i);

	void addItem(ConfItem mItem);
	void changeItem(int i,ConfItem mItem);
	void deleteItem(int i);

	//‘ÀÀ„∑˚÷ÿ‘ÿ

	int operator+(ConfItem mItem);

	ConfSection(const ConfSection& mSection);

protected:
	string key;
	vector<ConfItem> vals;

};
