// ConfWritter.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "ConfWritter.h"

int main()
{
	mainMenu();
    return 0;
}

void mainMenu() {
	cout << "������ӭʹ�������ļ��༭ϵͳ����" << endl;
	cout << "��ѡ����Ҫִ�еĲ�����" << endl;
	cout << "1.�������ļ�" << endl;
	cout << "2.�½������ļ�" << endl;
	cout << "��������������������������������" << endl;

	int cmd;
	cin >> cmd;
	switch (cmd)
	{
	case 1:
		openFile();
		break;
	case 2:
		newFile();
		break;
	default:
		cout << "�Ƿ�����,�������˵���" << endl;
		mainMenu();
		break;
	}

}

void newFile()
{
	string path;
	cout << "�������ļ����ʹ洢·����" << endl;
	cin >> path;

	mFile.setConf(path,ConfFile::TYPE_WRITE);

	ConfSection newConfSection("_default");
	mFile.addSection(newConfSection);

	editMenu();
}

void openFile()
{
	string path;
	cout << "�������ļ����ʹ洢·����" << endl;
	cin >> path;

	mFile.setConf(path, ConfFile::TYPE_READ);


	//�ļ�������
	try
	{
		mFile.read();
	}
	catch (FileError error)
	{
		cout << error.getError() << endl;
		mainMenu();
	}

	editMenu();
}

void editMenu()
{
	cout << "�ļ�����" << mFile.getPath() << endl;
	cout << "������ѡ����Ҫִ�еĲ�����������" << endl;
	cout << "1.�½���" << endl;

	if (mFile.getSectionsSzie() > 0) {
		cout << "��������������������������������" << endl;

		int i;
		vector<ConfSection> mSlist = mFile.getSectionList();
		for (i = 0; i < mFile.getSectionsSzie(); i++) {
			cout << i+11 <<".�޸Ľڣ�" << mSlist[i].getKey() << endl;
		}
	}

	cout << "��������������������������������" << endl;
	cout << "0.���沢�˳�" << endl;

	

	int cmd;
	cin >> cmd;
	if (cmd == 0) {
		mFile.save();
	}
	else if (cmd == 1) {
		addSection();
	}
	else if (cmd > 10) {
		editSection(cmd - 11);
	}
	else {
		cout << "�Ƿ�����,������һ�㡣" << endl;
		editMenu();
	}
}

void addSection() {
	string name;
	cout << "����������ƣ�" << endl;
	cin >> name;

	ConfSection newConfSection(name);
	mFile.addSection(newConfSection);

	editSection(mFile.getSectionsSzie()-1);
}

void editSection(int i) {
	ConfSection mSection = mFile.getSection(i);
	cout << "�����ƣ�" << mSection.getKey() << endl;
	cout << "������ѡ����Ҫִ�еĲ�����������" << endl;
	cout << "1.�½���" << endl;
	cout << "2.�½�������" << endl;
	cout << "3.�޸Ľ�����" << endl;
	cout << "4.ɾ����" << endl;

	if (mSection.getSectionSize() > 0) {
		cout << "��������������������������������" << endl;

		int i;
		vector<ConfItem> mIlist = mSection.getConfItemList();

		for (i = 0; i < mSection.getSectionSize(); i++) {
			cout << i + 11 << ".�޸��" << mIlist[i].toString() << endl;
		}
	}

	cout << "��������������������������������" << endl;
	cout << "0.������һ��" << endl;
	cout << "��������������������������������" << endl;

	int cmd;
	cin >> cmd;
	if (cmd == 0) {
		editMenu();
	}
	else if (cmd == 1) {
		addItem(i);
	}
	else if (cmd == 3) {
		string name;
		cout << "�����µĽ����ƣ�" << endl;
		cin >> name;
		mSection.setSectionName(name);
		mFile.changeSection(mSection, i);

		editSection(i);
	}
	else if (cmd == 4) {
		char cmd;
		cout << "ȷ��ɾ��������Yȷ����" ;
		cin >> cmd;
		if (cmd == 'Y') {
			mFile.removeSection(i);
			editMenu();
		}
		else
		{
			editSection(i);
		}

	}
	else if (cmd > 10&&cmd<=10+mSection.getSectionSize()) {
		editItem(cmd - 11, i);
	}
	else {
		cout << "�Ƿ�����,������һ�㡣" << endl;
		editSection(i);
	}
}

void addItem(int i)
{
	string itemName, itemVal;
	ConfSection mSection = mFile.getSection(i);
	cout << "�����������ƣ�";
	cin >> itemName;
	cout << "������ֵ��";
	cin >> itemVal;
	ConfItem mItem(itemName,itemVal);
	mSection.addItem(mItem);

	mFile.changeSection(mSection, i);

	editSection(i);
}

void editItem(int i , int si)
{
	cout << "������ѡ����Ҫִ�еĲ�����������" << endl;
	cout << "1.�޸�������" << endl;
	cout << "2.�޸���ֵ" << endl;
	cout << "3.ɾ����" << endl;

	cout << "��������������������������������" << endl;

	cout << "0.��������" << endl;

	cout << "��������������������������������" << endl;


	ConfSection mSection = mFile.getSection(si);
	int cmd;
	cin >> cmd;
	if (cmd == 1) {
		string name;
		cout << "������Ҫ�޸�Ϊ�����ƣ�" << endl;
		cin >> name;

		ConfItem cdItem = mSection.getConfItem(i);
		cdItem.setKey(name);

		mSection.changeItem(i, cdItem);

		mFile.changeSection(mSection, si);
		editSection(si);

	}
	else if (cmd == 2) {
		string name;
		cout << "������Ҫ�޸�Ϊ��ֵ��" << endl;
		cin >> name;

		ConfItem cdItem = mSection.getConfItem(i);
		cdItem.setVal(name);

		mSection.changeItem(i, cdItem);

		mFile.changeSection(mSection, si);
		editSection(si);
	}
	else if (cmd == 3) {
		mSection.deleteItem(i);
		mFile.changeSection(mSection, si);
		editSection(si);
	}
	else if (cmd == 0) {
		editSection(si);
	}
	else {
		cout << "�Ƿ�����,������һ�㡣" << endl;
		editItem(i, si);
	}

}

