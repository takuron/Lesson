// 13-1.cpp : �������̨Ӧ�ó������ڵ㡣
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
		//x = privD; ���ܷ��ʸ���˽�г�Ա
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
		//y = privD; �޷����ʸ����˽�г�Ա
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
	//p.protD = 10; ���ⲻ�ɷ��ʱ�����Ա
	p.setProtD(10);
	//p.PrivD = 10; ���ⲻ�ɷ���˽�г�Ա
	p.setPrivD(10);

	Son s;
	s.pubD = 20;
	//s.ProtD = 20; ���ⲻ�ɷ��ʱ�����Ա
	s.setProtD(20);
	//s.PrivD = 20; ���ⲻ�ɷ���˽�г�Ա
	s.setPrivD(20);


	Daughter d;
	//d.pubD = 30; pubD������˽�г�Ա
	d.setPubD(30);
	//d.ProtD = 30; ���ⲻ�ɷ��ʱ�����Ա
	//d.PrivD = 30; ���ⲻ�ɷ���˽�г�Ա
    return 0;
}

