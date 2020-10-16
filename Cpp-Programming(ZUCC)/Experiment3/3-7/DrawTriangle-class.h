#pragma once

// CppProgrammingTask
// Author: takuron@github.com

#include "stdafx.h"

class DrawTraingle
{
public:
	DrawTraingle(int a) {
		n = a;
	};
	void drawForward() {
		int i;
		for (i = 0; i <= n; i++) {
			drawLine(i);
		}
	}
	void drawReverous() {
		int i;
		for (i = n; i >= 0; i--) {
			drawLine(i);
		}
	}
	void drawLine(int num){
		int i;
		for (i = 0; i <= num; i++) {
			cout << "*";
		}
		cout << endl;
	}

private:
	int n;
};