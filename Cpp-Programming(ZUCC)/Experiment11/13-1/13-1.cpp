// 13-1.cpp : 定义控制台应用程序的入口点。
//

// CppProgrammingTask
// Author: takuron@github.com

#include "stdafx.h"

class Parent {
public:
	int pubD;

	int getPrivD() {
		return privD;
	}
	void setProtD(int i) {
		protD = i;
	}
	void setPrivD(int i) {
		privD = i;
	}
protected:
	int protD;
private:
	int privD;
};

class Son: public Parent
{
public:

	void fn() {
		int x;
		x = pubD;
		x = protD;
		//x = privD; 不能访问父类私有成员
		x = getPrivD();
	}

private:

};

class Daughter: private Parent
{
public:
	void fn() {
		int y;
		y = pubD;
		y = protD;
		//y = privD; 无法访问父类的私有成员
		y = getPrivD();
	}

	void setPubD(int i) {
		pubD = i;
	}
	


private:

};

int main()
{
	Parent p;
	
	p.pubD = 10;
	//p.protD = 10; 类外不可访问保护成员
	p.setProtD(10);
	//p.PrivD = 10; 类外不可访问私有成员
	p.setPrivD(10);

	Son s;
	s.pubD = 20;
	//s.ProtD = 20; 类外不可访问保护成员
	s.setProtD(20);
	//s.PrivD = 20; 类外不可访问私有成员
	s.setPrivD(20);


	Daughter d;
	//d.pubD = 30; pubD现在是私有成员
	d.setPubD(30);
	//d.ProtD = 30; 类外不可访问保护成员
	//d.PrivD = 30; 类外不可访问私有成员
    return 0;
}

