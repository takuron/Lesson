// ConfigWritter.cpp : 定义控制台应用程序的入口点。
//

#include "ConfigWritter.h"

int main()
{
	mainMenu();
    return 0;
}

void mainMenu() {
	int choose = 0;
	cout << "欢迎使用配置文件编辑系统" << endl;
	cout << "------------------------------" << endl;
	cout << "1. 新建文件" << endl;
	cout << "2. 打开文件" << endl;
	cout << "------------------------------" << endl;
	cout << "请选择需要执行的操作：";
	cin >> choose;

	switch (choose)
	{
	case 1:

		break;
	case 2:
		openFile();
		break;
	default:
		cout << "错误：输入了不存在的操作编号，返回主菜单"<<endl;
		mainMenu();
		break;
	}
}

void openFile() {

}