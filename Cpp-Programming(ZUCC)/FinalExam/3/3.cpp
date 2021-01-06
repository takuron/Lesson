// 3.cpp : �������̨Ӧ�ó������ڵ㡣
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
		cout << "������" << weight << "�绰����" << num1 << endl;
	}

protected:
	int num1;

};

class Camera:virtual public Object
{
public:
	Camera(int w,int nu2);

	void show() {
		cout << "������" << weight << " ��Ƭ����" << num2 << endl;
	}

protected:
	int num2;

};

class Mobile : virtual public Telephone, virtual public Camera
{
public:
	Mobile(int w,int nu1,int nu2);

	void show() {
		cout << "������" << weight<<"�绰����"<<num1 << " ��Ƭ����" << num2 << endl;
	}

private:

};

int main()
{
	cout << "����������Ĳ���" << endl;
	int w, num1, num2;
	cin >> w >> num1;

	Camera c(w, num1);
	c.show();

	cout << "������绰�Ĳ���" << endl;

	cin >> w >> num2;
	Telephone t(w, num2);

	t.show();

	cout << "�������ֻ��Ĳ���" << endl;

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
