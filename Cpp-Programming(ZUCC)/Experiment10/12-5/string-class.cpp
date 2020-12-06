#include "string-class.h"

// CppProgrammingTask
// Author: takuron@github.com

myString::myString()
{
	str = '\0';
}

myString::myString(const char * s)
{
	str = new char[strlen(s) + 1];
	strcpy(str, s);
}

myString::~myString()
{
	delete[]str;
}

void myString::display()
{
	cout << str << endl;
}

myString & myString::operator+(const myString &sec)
{
	int length = strlen(str) + strlen(sec.str) + 1;

	char* lstr = new char[strlen(str) + 1];
	strcpy(lstr, str);

	delete[] str;

	strcpy(str, lstr);
	strcat(str, sec.str);

	delete[] lstr;

	return *this;
	// TODO: 在此处插入 return 语句
}

myString & myString::operator-(const myString &sec)
{
	int length = strlen(str) + strlen(sec.str) + 1;

	char* lstr = new char[strlen(str) + 1];
	strcpy(lstr, str);

	delete[] str;

	strcpy(str, lstr);

	int j, k;

	for (j = k = 0; str[j] != '\0'; j++)
		if (str[j] != ' ')
			str[k++] = str[j];
	str[k] = '\0';

	strcat(str, sec.str);

	delete[] lstr;

	return *this;
	// TODO: 在此处插入 return 语句
}
