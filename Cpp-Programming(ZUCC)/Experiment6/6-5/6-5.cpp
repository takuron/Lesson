// 6-5.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

int isUpperMatrix(int x[6][6]) {
	for (int i1 = 3; i1 < 6; i1++) {
		for (int i2 = 3; i2 < 6; i2++) {
			if (x[i1][i2] != 0) {
				return 0;
			}
		}
	}
	return 1;
}

int main()
{
	int matrix[6][6] = {
		{1,2,3,4,5,6},
		{1,2,3,4,5,0},
		{1,2,3,4,0,0},
		{1,2,3,0,0,0},
		{1,2,0,0,0,2},
		{1,0,0,0,0,0}
	};

	cout << isUpperMatrix(matrix)<<endl;
    return 0;
}



