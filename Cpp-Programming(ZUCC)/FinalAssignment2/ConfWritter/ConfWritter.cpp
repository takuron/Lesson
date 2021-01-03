// ConfWritter.cpp : 定义控制台应用程序的入口点。
//

#include "ConfWritter.h"

int main()
{
	mainMenu();
    return 0;
}

void mainMenu() {
	cout << "——欢迎使用配置文件编辑系统——" << endl;
	cout << "请选择需要执行的操作：" << endl;
	cout << "1.打开配置文件" << endl;
	cout << "2.新建配置文件" << endl;
	cout << "————————————————" << endl;

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
		cout << "非法操作,返回主菜单。" << endl;
		mainMenu();
		break;
	}

}

void newFile()
{
	string path;
	cout << "请输入文件名和存储路径：" << endl;
	cin >> path;

	mFile.setConf(path,ConfFile::TYPE_WRITE);

	ConfSection newConfSection("_default");
	mFile.addSection(newConfSection);

	editMenu();
}

void openFile()
{
	string path;
	cout << "请输入文件名和存储路径：" << endl;
	cin >> path;

	mFile.setConf(path, ConfFile::TYPE_READ);


	//文件错误处理
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
	cout << "文件名：" << mFile.getPath() << endl;
	cout << "———选择需要执行的操作————" << endl;
	cout << "1.新建节" << endl;

	if (mFile.getSectionsSzie() > 0) {
		cout << "————————————————" << endl;

		int i;
		vector<ConfSection> mSlist = mFile.getSectionList();
		for (i = 0; i < mFile.getSectionsSzie(); i++) {
			cout << i+11 <<".修改节：" << mSlist[i].getKey() << endl;
		}
	}

	cout << "————————————————" << endl;
	cout << "0.保存并退出" << endl;

	

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
		cout << "非法操作,返回上一层。" << endl;
		editMenu();
	}
}

void addSection() {
	string name;
	cout << "请输入节名称：" << endl;
	cin >> name;

	ConfSection newConfSection(name);
	mFile.addSection(newConfSection);

	editSection(mFile.getSectionsSzie()-1);
}

void editSection(int i) {
	ConfSection mSection = mFile.getSection(i);
	cout << "节名称：" << mSection.getKey() << endl;
	cout << "———选择需要执行的操作————" << endl;
	cout << "1.新建项" << endl;
	cout << "2.新建数组项" << endl;
	cout << "3.修改节名称" << endl;
	cout << "4.删除节" << endl;

	if (mSection.getSectionSize() > 0) {
		cout << "————————————————" << endl;

		int i;
		vector<ConfItem> mIlist = mSection.getConfItemList();

		for (i = 0; i < mSection.getSectionSize(); i++) {
			cout << i + 11 << ".修改项：" << mIlist[i].toString() << endl;
		}
	}

	cout << "————————————————" << endl;
	cout << "0.返回上一层" << endl;
	cout << "————————————————" << endl;

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
		cout << "输入新的节名称：" << endl;
		cin >> name;
		mSection.setSectionName(name);
		mFile.changeSection(mSection, i);

		editSection(i);
	}
	else if (cmd == 4) {
		char cmd;
		cout << "确定删除吗？输入Y确定：" ;
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
		cout << "非法操作,返回上一层。" << endl;
		editSection(i);
	}
}

void addItem(int i)
{
	string itemName, itemVal;
	ConfSection mSection = mFile.getSection(i);
	cout << "请输入项名称：";
	cin >> itemName;
	cout << "请输入值：";
	cin >> itemVal;
	ConfItem mItem(itemName,itemVal);
	mSection.addItem(mItem);

	mFile.changeSection(mSection, i);

	editSection(i);
}

void editItem(int i , int si)
{
	cout << "———选择需要执行的操作————" << endl;
	cout << "1.修改项名称" << endl;
	cout << "2.修改项值" << endl;
	cout << "3.删除项" << endl;

	cout << "————————————————" << endl;

	cout << "0.放弃更改" << endl;

	cout << "————————————————" << endl;


	ConfSection mSection = mFile.getSection(si);
	int cmd;
	cin >> cmd;
	if (cmd == 1) {
		string name;
		cout << "请输入要修改为的名称：" << endl;
		cin >> name;

		ConfItem cdItem = mSection.getConfItem(i);
		cdItem.setKey(name);

		mSection.changeItem(i, cdItem);

		mFile.changeSection(mSection, si);
		editSection(si);

	}
	else if (cmd == 2) {
		string name;
		cout << "请输入要修改为的值：" << endl;
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
		cout << "非法操作,返回上一层。" << endl;
		editItem(i, si);
	}

}

