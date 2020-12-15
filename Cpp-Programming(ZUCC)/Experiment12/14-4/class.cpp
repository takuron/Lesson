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
		cout << name << "是优等生" << endl;
	}
	else {
		cout << name << "不是优等生" << endl;
	}
}

Teacher::Teacher(char * n, int nu):Person(n)
{
	number = nu;
}

void Teacher::show()
{
	if (number >= 3) {
		cout << name << "是合格教师" << endl;
	}
	else {
		cout << name << "不是合格教师" << endl;
	}
}
