#pragma once

#include "stdafx.h"

//所有类型单数据子项的抽象类
template<typename T>
class ConfItem
{
public:
	ConfItem(string k,T val);
	ConfItem(string k);

	//拷贝构造函数
	ConfItem(const ConfItem &obj);

	void setValue(T val);
	string getKey();
	T getValue();

	//友元类实现存储
	friend string Item2String(ConfItem<T>);

	//由不同类型的子对象实现输出本行数值
	virtual string getLine()=0;
	virtual int type() = 0;

protected:
	string key;
	T value;

private:

};

//整型子项的类
class ConfIntItem : public ConfItem<int>
{
public:
	ConfIntItem(string k, int val);
	string getLine();

	int type() { return 1; }

	// 实现直接对值用运算符的操作

	ConfIntItem operator+(int val);
	ConfIntItem operator-(int val);

private:

};

//浮点型子项的类
class ConfFloatItem : public ConfItem<double>
{
public:
	ConfFloatItem(string k, double val);
	string getLine();

	int type() { return 2; }

	// 实现直接对值用运算符的操作

	ConfFloatItem operator+(double val);
	ConfFloatItem operator-(double val);

private:

};

//布尔型子项的类
class ConfBoolItem : public ConfItem<bool>
{
public:
	ConfBoolItem(string k, bool val);
	string getLine();

	int type() { return 3; }

	// 实现取非操作

	ConfBoolItem operator!();

private:

};

//字符串型子项的类
class ConfStringItem : public ConfItem<string>
{
public:
	ConfStringItem(string k, string val);
	string getLine();

	int type() { return 4; }

	ConfStringItem operator=(string val);

private:

};

//整型数组子项的类
class ConfIntArrayItem : public ConfItem<vector<int>>
{
public:
	ConfIntArrayItem(string k, int* val,int size);
	string getLine();

	int type() { return 11; }

private:
	int size = 0;
};

//字符数组子项的类

class ConfStringArrayItem : public ConfItem<vector<string>>
{
public:
	ConfStringArrayItem(string k, string* val, int size);
	string getLine();

	int type() { return 12; }

private:
	int size = 0;

};

template<typename T>
string Item2String(ConfItem<T> conf) {
	return conf.key + " " + to_string(conf.value);
}
