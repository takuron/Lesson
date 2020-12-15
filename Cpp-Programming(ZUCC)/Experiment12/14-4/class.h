#pragma once

#include "stdafx.h"

// CppProgrammingTask
// Author: takuron@github.com

class Person
{
public:
	Person(char* n);

	virtual void show() = 0;

protected:
	char name[30];

};

class Student : public Person
{
public:
	Student(char* n, int s1,int s2,int s3);

	void show();

private:
	int score1,score2,score3;
};

class Teacher : public Person
{
public:
	Teacher(char* n,int nu);

	void show();

private:
	int number;
};