#include "ConfItems.h"

ConfItem::ConfItem(string k, string v)
{
	key = k;
	val = v;
}

ConfItem::ConfItem(string k)
{
	key = k;
}

ConfItem::ConfItem(const ConfItem & mFile)
{
	key = mFile.key;
	val = mFile.val;
}

void ConfItem::setKey(string k)
{
	key = k;
}

void ConfItem::setVal(string v)
{
	val = v;
}

string ConfItem::getKey()
{
	return string(key);
}

string ConfItem::toString()
{
	return string(key+" = "+val);
}

ConfArrayItem::ConfArrayItem(string k):ConfItem(k)
{

}

void ConfArrayItem::add(string item)
{
	items.push_back(item);
}

string ConfArrayItem::toString()
{
	change2val();
	
	return string(key + " = " + val);
}

void ConfArrayItem::change2val()
{
	int i;
	for (i = 0; i < items.size(); i++) {
		val = val + items[i];
		if (i != items.size() - 1) val = val + ",";
	}
	val = "[" + val + "]";
}

ConfItem toNormalItem(ConfArrayItem mArrayItem)
{
	mArrayItem.change2val();
	return ConfItem(mArrayItem.key,mArrayItem.val);
}
