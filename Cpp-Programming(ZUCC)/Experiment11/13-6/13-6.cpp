// 13-6.cpp : ��������̨Ӧ�ó��������ڵ㡣
//

// CppProgrammingTask
// Author: takuron@github.com

#include "stdafx.h"
#include "circle-class.h"
#include "rectangle-class.h"

class Structure : public Cylinder , public Sphere , public Cubiod
{
public:
	Structure(int sr,int cr, int ch, int l, int w, int h);

	void printV();

private:

};

Structure::Structure(int sr, int cr, int ch, int l, int w, int h):Cylinder(cr,ch),Sphere(sr),Cubiod(l,w,h)
{

}

void Structure::printV()
{
	cout << "�����ṹ������Ϊ��" << Cylinder::volum() + Sphere::volum() + Cubiod::volum() << endl;
}


int main()
{
	int sr, cr, ch, l, w, h;

	cout << "���������İ뾶" << endl;
	cin >> sr;
	cout << "������Բ���İ뾶�͸�" << endl;
	cin >> cr>> ch;
	cout << "�����볤�����ĳ�����" << endl;
	cin >> l >> w >> h;

	Structure myStructure(sr, cr, ch, l, w, h);
	myStructure.printV();
	return 0;
}
