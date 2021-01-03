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

//实现一个数组的抽象类，并且定义需要子类实现的方法
template<typename T>
class MyArray
{
public:
	virtual void add(T item) = 0;

private:

};

//将数组类设计成虚基类，并同时继承项类和数组类，并实现抽象的方法。
class ConfArrayItem : public ConfItem, virtual public MyArray<string> {
public:
	ConfArrayItem(string key);

	void add(string item);

	//重写tostring方法
	string toString();

	void change2val();

	//定义转变成普通项类的友元函数
	friend ConfItem toNormalItem(ConfArrayItem mArrayItem);
private:
	vector<string> items;
};