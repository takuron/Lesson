// 5-6.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "Str-class.h"

// CppProgrammingTask
// Author: takuron@github.com


int main()
{
	Str str1("abcd    ", "12345", '+');
	str1.opre();

	Str str2("abcd    ", "12345", '-');
	str2.opre();
    return 0;
}

