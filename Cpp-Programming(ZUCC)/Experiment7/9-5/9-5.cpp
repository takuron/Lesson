// 9-5.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"


int main(int argc, char *argv[])
{
	char c;
	if (argc != 3) {
		cout << "错误参数" << endl;
	}
	else {
		c = *argv[1];
		switch (c)
		{
		case '+':
			cout << "执行加密程序段" << endl;
			break;
		case '-':
			cout << "执行解密程序段" << endl;
			break;
		default:
			cout << "操作错误" << endl;
			break;
		}
	}
    return 0;
}

