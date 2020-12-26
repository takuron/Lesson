#pragma once

#include "stdafx.h"

//�������͵���������ĳ�����
template<typename T>
class ConfItem
{
public:
	ConfItem(string k,T val);
	ConfItem(string k);

	//�������캯��
	ConfItem(const ConfItem &obj);

	void setValue(T val);
	string getKey();
	T getValue();

	//��Ԫ��ʵ�ִ洢
	friend string Item2String(ConfItem<T>);

	//�ɲ�ͬ���͵��Ӷ���ʵ�����������ֵ
	virtual string getLine()=0;
	virtual int type() = 0;

protected:
	string key;
	T value;

private:

};

//�����������
class ConfIntItem : public ConfItem<int>
{
public:
	ConfIntItem(string k, int val);
	string getLine();

	int type() { return 1; }

	// ʵ��ֱ�Ӷ�ֵ��������Ĳ���

	ConfIntItem operator+(int val);
	ConfIntItem operator-(int val);

private:

};

//�������������
class ConfFloatItem : public ConfItem<double>
{
public:
	ConfFloatItem(string k, double val);
	string getLine();

	int type() { return 2; }

	// ʵ��ֱ�Ӷ�ֵ��������Ĳ���

	ConfFloatItem operator+(double val);
	ConfFloatItem operator-(double val);

private:

};

//�������������
class ConfBoolItem : public ConfItem<bool>
{
public:
	ConfBoolItem(string k, bool val);
	string getLine();

	int type() { return 3; }

	// ʵ��ȡ�ǲ���

	ConfBoolItem operator!();

private:

};

//�ַ������������
class ConfStringItem : public ConfItem<string>
{
public:
	ConfStringItem(string k, string val);
	string getLine();

	int type() { return 4; }

	ConfStringItem operator=(string val);

private:

};

//���������������
class ConfIntArrayItem : public ConfItem<vector<int>>
{
public:
	ConfIntArrayItem(string k, int* val,int size);
	string getLine();

	int type() { return 11; }

private:
	int size = 0;
};

//�ַ������������

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
