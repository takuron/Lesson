#pragma once

#include "stdafx.h"

class ArrayTool
{
public:
	ArrayTool(int a[]);
	int timeOfItem(int b) {
		int count = 0;
		for (int i = 0; i < 80; i++) {
			if (x[i] == b) {
				count++;
			}
		}
		return count;
	}

private:
	int x[80];
};

ArrayTool::ArrayTool(int a[])
{
	for (int i = 0; i < 80; i++) {
		x[i] = a[i];
	}
}
