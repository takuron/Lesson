// ConfigWritter.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "ConfigWritter.h"
#include "ConfItems.h"

void test() {
	string key;
	cin >> key;
	string strs[5] = { "tese","syd","shjd","sheh","sjjde" };
	ConfStringArrayItem cfs(key,strs,5);
	cout << Item2String(cfs);
}

int main()
{
	/*mainMenu();*/
	test();
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
	ifstream input;
	string files;
	cout << "�������ļ�����";
	cin >> files;
	input.open(files, ios::in);
	cout << input.get();
	input.close();
}