#include "class.h"

Person::Person(char * n)
{
	strcpy(name, n);
}

Student::Student(char * n, int s1,int s2,int s3):Person(n)
{
	score1 = s1;
	score2 = s2;
	score3 = s3;
}

void Student::show()
{
	if (score1 > 75 && score2 > 75 && score3 > 75) {
		cout << name << "���ŵ���" << endl;
	}
	else {
		cout << name << "�����ŵ���" << endl;
	}
}

Teacher::Teacher(char * n, int nu):Person(n)
{
	number = nu;
}

void Teacher::show()
{
	if (number >= 3) {
		cout << name << "�Ǻϸ��ʦ" << endl;
	}
	else {
		cout << name << "���Ǻϸ��ʦ" << endl;
	}
}
