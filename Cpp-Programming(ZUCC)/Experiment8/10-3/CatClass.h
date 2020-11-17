#pragma once

#include "stdafx.h"

// CppProgrammingTask
// Author: takuron@github.com

class Cat
{
public:
	Cat(char* c,int a, int w) {
		age = a;
		weight = w;
		strcpy(color, c);
	}

	char* getColor() {
		char reColor[10];
		strcpy(reColor, color);
		return reColor;
	}

	int getAge() {
		return age;
	}

	int getWeight() {
		return weight;
	}

	void setColor(char* c) {
		strcpy(color, c);
	}

	void setWeight(int w) {
		weight = w;
	}

	void setAge(int a) {
		age = a;
	}

	void print() {
		cout << "color:" << color << " age:" << age << " weight:" << weight << endl;
	}

private:
	int weight, age;
	char color[10];
};
