#include "ConfSections.h"

ConfSection::ConfSection(string k)
{
	key = k;
}

//ConfSection::ConfSection(string k, string sv)
//{
//	key = k;
//	string sVals = sv;
//
//	int index = sVals.find_first_of('\n');
//	int size = sVals.size();
//
//	while (index<size)
//	{
//		string item(sVals.c_str(), index);
//
//		//去除注释 
//		if (item.find_first_of('#')) {
//			string cpItem(item.c_str(), item.find_first_of('#'));
//			item = cpItem;
//		}
//		else
//		{
//
//		}
//
//		//判断合法行
//
//		if (item.find_first_of('=') != 0 && item.find_first_of('=') < item.size()) {
//			cout << item << endl;
//		}
//
//
//		sVals.erase(0, index);
//		index = sVals.find_first_of('\n');
//		size = sVals.size();
//	}
//}

string ConfSection::getKey()
{
	return string(key);
}

int ConfSection::getItemsSize()
{
	return vals.size();
}

void ConfSection::setSectionKey(string name)
{
	key = name;
}

vector<ConfItem> ConfSection::getConfItemList()
{
	return vector<ConfItem>(vals);
}

ConfItem ConfSection::getConfItem(int i)
{
	return vals[i];
}

void ConfSection::addItem(ConfItem mItem)
{
	vals.push_back(mItem);
}

void ConfSection::changeItem(int i, ConfItem mItem)
{
	vals[i] = mItem;
}

void ConfSection::deleteItem(int i)
{
	vals.erase(begin(vals) + i);
}

int ConfSection::operator+(ConfItem mItem)
{
	addItem(mItem);
	return getItemsSize();
}

ConfSection::ConfSection(const ConfSection & mSection)
{
	key = mSection.key;
	vals = mSection.vals;
}
