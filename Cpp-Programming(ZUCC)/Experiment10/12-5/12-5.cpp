// 12-5.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "string-class.h"


int main()
{
	myString s1("�㽭��ѧ       "), s2("�����ѧԺ��ӭ����"), s3;

	s3 = s1 + s2;
	s3.display();

	s3 = s1 - s2;
	s3.display();

    return 0;
}

