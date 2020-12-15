// 14-7.cpp : 定义控制台应用程序的入口点。
//

// CppProgrammingTask
// Author: takuron@github.com

#include "stdafx.h"
#include "circle-class.h"
#include "rectangle-class.h"


class Structure : public Cylinder, public Sphere, public Cubiod
{
public:
	Structure(int r, int ch, int l, int w, int h);

	void printV();
	double volum();

private:

};

Structure::Structure(int r, int ch, int l, int w, int h) :Cylinder(r, ch), Sphere(r), Cubiod(l, w, h), Circle(r)
{

}

void Structure::printV()
{
	cout << "体积为：" << volum() << endl;
}

double Structure::volum()
{
	return Cylinder::volum() + Sphere::volum() + Cubiod::volum();
}

int main()
{
	int r, ch, l, w, h;

	cout << "输入r" << endl;
	cin >> r;
	cout << "输入圆柱高" << endl;
	cin >> ch;
	cout << "输入长方体长宽高" << endl;
	cin >> l >> w >> h;

	Structure myStructure(r, ch, l, w, h);
	myStructure.printV();
    return 0;
}

