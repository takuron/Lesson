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

//ʵ��һ������ĳ����࣬���Ҷ�����Ҫ����ʵ�ֵķ���
template<typename T>
class MyArray
{
public:
	virtual void add(T item) = 0;

private:

};

//����������Ƴ�����࣬��ͬʱ�̳�����������࣬��ʵ�ֳ���ķ�����
class ConfArrayItem : public ConfItem, virtual public MyArray<string> {
public:
	ConfArrayItem(string key);

	void add(string item);

	//��дtostring����
	string toString();

	void change2val();

	//����ת�����ͨ�������Ԫ����
	friend ConfItem toNormalItem(ConfArrayItem mArrayItem);
private:
	vector<string> items;
};