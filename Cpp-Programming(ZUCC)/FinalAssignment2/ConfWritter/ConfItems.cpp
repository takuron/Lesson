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
	return string(key+" = "+val+"\n");
}
