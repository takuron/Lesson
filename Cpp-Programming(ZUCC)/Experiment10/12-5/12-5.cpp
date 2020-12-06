// 12-5.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "string-class.h"


int main()
{
	myString s1("浙江大学       "), s2("计算机学院欢迎您！"), s3;

	s3 = s1 + s2;
	s3.display();

	s3 = s1 - s2;
	s3.display();

    return 0;
}

