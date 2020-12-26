#include "ConfItems.h"

template<typename T>
ConfItem<T>::ConfItem(string k, T val)
{
	key = k;
	value = val;
}

template<typename T>
ConfItem<T>::ConfItem(string k)
{
	key = k;
}


//¿½±´¹¹Ôìº¯Êý 
template<typename T>
ConfItem<T>::ConfItem(const ConfItem &obj):value(obj.value),key(obj.key)
{
}

template<typename T>
void ConfItem<T>::setValue(T val)
{
	value = val;
}

template<typename T>
string ConfItem<T>::getKey()
{
	return key;
}

template<typename T>
T ConfItem<T>::getValue() {
	return value;
}

ConfIntItem::ConfIntItem(string k, int val):ConfItem<int>(k,val)
{
}

string ConfIntItem::getLine()
{
	return key+" = "+ std::to_string(value);
}

ConfIntItem ConfIntItem::operator+(int val)
{
	ConfIntItem neItem(this->key, this->value + val);
	return neItem;
}

ConfIntItem ConfIntItem::operator-(int val)
{
	ConfIntItem neItem(this->key, this->value - val);
	return neItem;
}

ConfFloatItem::ConfFloatItem(string k, double val):ConfItem<double>(k,val)
{
}

string ConfFloatItem::getLine()
{
	return key + " = " + std::to_string(value);
}

ConfFloatItem ConfFloatItem::operator+(double val)
{
	ConfFloatItem neItem(this->key, this->value + val);
	return neItem;
}

ConfFloatItem ConfFloatItem::operator-(double val)
{
	ConfFloatItem neItem(this->key, this->value - val);
	return neItem;
}

ConfBoolItem::ConfBoolItem(string k, bool val):ConfItem(k,val)
{
}

string ConfBoolItem::getLine()
{
	return key + " = " + std::to_string(value);
}

ConfBoolItem ConfBoolItem::operator!()
{
	return ConfBoolItem(this->key,!(this->value));
}

ConfStringItem::ConfStringItem(string k, string val):ConfItem(k,val)
{
}

string ConfStringItem::getLine()
{
	return key + " = " + "\"" + value + "\"";
}

ConfStringItem ConfStringItem::operator=(string val)
{
	return ConfStringItem(this->key,val);
}

ConfIntArrayItem::ConfIntArrayItem(string k, int* val, int size):ConfItem(k,vector<int>(val,val+size))
{
	this->size = size;
}

string ConfIntArrayItem::getLine()
{
	string arrayout="[";
	int i;
	for (i = 0; i < size; i++) {
		arrayout = arrayout + to_string(value[i]);
		if (i != (size - 1)) arrayout = arrayout + ",";
	}
	arrayout = arrayout + "]";
	return key+" = "+arrayout;
}

ConfStringArrayItem::ConfStringArrayItem(string k, string * val, int size):ConfItem(k, vector<string>(val, val + size))
{
	this->size = size;
}

string ConfStringArrayItem::getLine()
{
	string arrayout = "[";
	int i;
	for (i = 0; i < size; i++) {
		arrayout = arrayout + "\"" + value[i] + "\"";
		if (i != (size - 1)) arrayout = arrayout + ",";
	}
	arrayout = arrayout + "]";
	return key + " = " + arrayout;
}

