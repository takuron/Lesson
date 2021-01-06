// 3.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"

class Object
{
public:
	Object(int w) {
		weight = w;
	};

	virtual void show() = 0;

protected:
	int weight;

};

class Telephone : virtual public Object
{
public:
	Telephone(int w, int nu1);

	void show() {
		cout << "重量：" << weight << "电话数：" << num1 << endl;
	}

protected:
	int num1;

};

class Camera:virtual public Object
{
public:
	Camera(int w,int nu2);

	void show() {
		cout << "重量：" << weight << " 相片数：" << num2 << endl;
	}

protected:
	int num2;

};

class Mobile : virtual public Telephone, virtual public Camera
{
public:
	Mobile(int w,int nu1,int nu2);

	void show() {
		cout << "重量：" << weight<<"电话数："<<num1 << " 相片数：" << num2 << endl;
	}

private:

};

int main()
{
	cout << "请输入相机的参数" << endl;
	int w, num1, num2;
	cin >> w >> num1;

	Camera c(w, num1);
	c.show();

	cout << "请输入电话的参数" << endl;

	cin >> w >> num2;
	Telephone t(w, num2);

	t.show();

	cout << "请输入手机的参数" << endl;

	cin >> w >> num1 >> num2;

	Mobile m(w, num1, num2);

	m.show();

    return 0;
}

Telephone::Telephone(int w, int nu1):Object(w)
{
	num1 = nu1;
}

Camera::Camera(int w,int nu2):Object(w)
{
	num2 = nu2;
}

Mobile::Mobile(int w, int nu1, int nu2):Telephone(w,nu1),Camera(w,nu2),Object(w)
{
}
