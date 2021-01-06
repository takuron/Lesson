// 2.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

class Matrix
{
public:
	Matrix(int* input);

	void print();

	Matrix operator-(const Matrix &se);

private:
	int vals[16];
};


int main()
{
	int a[16], b[16], c[16],i;
	cout << "���������A��16����" << endl;
	for (i = 0; i < 16; i++) {
		cin >> a[i];
	}
	cout << "���������B��16����" << endl;
	for (i = 0; i < 16; i++) {
		cin >> b[i];
	}
	cout << "���������C��16����" << endl;
	for (i = 0; i < 16; i++) {
		cin >> c[i];
	}

	Matrix A(a);
	Matrix B(b);
	Matrix C(c);

	Matrix R = A - B - C;

	R.print();


    return 0;
}

Matrix::Matrix(int * input)
{
	int i = 0;
	for (i = 0; i < 16; i++) {
		vals[i] = input[i];
	}
}

void Matrix::print()
{
	int i, j;
	for (i = 0; i < 4; i++) {
		for (j = 0;j<4;j++)
		{
			cout << vals[i * 4 + j]<<" ";
		}
		cout << endl;
	}
}

Matrix Matrix::operator-(const Matrix &se)
{
	int s[16],i;
	for (i = 0; i < 16; i++) {
		s[i] = vals[i] - se.vals[i];
	}
	return Matrix(s);
}
