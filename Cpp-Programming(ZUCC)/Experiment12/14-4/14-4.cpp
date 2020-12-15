// 14-4.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "class.h"

void mShow(Person* p);

int main()
{
	int flag;
	cout << "请输入人员类型，1为老师，2为学生" << endl;
	cin >> flag;
	if (flag == 1) {
		char mn[30];
		int num;
		cout << "请输入姓名" << endl;
		cin >> mn;
		cout << "请输入论文数" << endl;
		cin >> num;

		Teacher mt(mn, num);

		mShow(&mt);
	}
	else if (flag == 2) {
		char mn[30];
		int sc1,sc2,sc3;
		cout << "请输入姓名" << endl;
		cin >> mn;
		cout << "请输入三科分数" << endl;
		cin >> sc1 >> sc2 >> sc3;
		Student mst(mn, sc1, sc2, sc3);
		mShow(&mst);
	}
	else {
		cout << "错误输入" << endl;
	}
    return 0;
}

void mShow(Person* p) {
	p->show();
}

