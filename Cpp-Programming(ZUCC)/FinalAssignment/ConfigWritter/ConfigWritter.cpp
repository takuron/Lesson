// ConfigWritter.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "ConfigWritter.h"

int main()
{
	mainMenu();
    return 0;
}

void mainMenu() {
	int choose = 0;
	cout << "��ӭʹ�������ļ��༭ϵͳ" << endl;
	cout << "------------------------------" << endl;
	cout << "1. �½��ļ�" << endl;
	cout << "2. ���ļ�" << endl;
	cout << "------------------------------" << endl;
	cout << "��ѡ����Ҫִ�еĲ�����";
	cin >> choose;

	switch (choose)
	{
	case 1:

		break;
	case 2:
		openFile();
		break;
	default:
		cout << "���������˲����ڵĲ�����ţ��������˵�"<<endl;
		mainMenu();
		break;
	}
}

void openFile() {

}