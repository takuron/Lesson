// 1.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"

class Suggestions
{
public:
	Suggestions(char* stage, char* pattern ,char* concept);
	~Suggestions();

	void show();

private:
	char new_development_stage[200];
	char new_developemnt_pattern[200];
	char new_development_concept[200];
};



Suggestions::Suggestions(char * stage, char * pattern, char * concept)
{
	strcpy(new_development_stage, stage);
	strcpy(new_developemnt_pattern, pattern);
	strcpy(new_development_concept, concept);
}

Suggestions::~Suggestions()
{
}

void Suggestions::show()
{
	cout << "�ҹ����ڣ�" << new_development_stage << "�ķ�չ�׶�" << endl;
	cout << "Ҫ������" << new_developemnt_pattern << "�ķ�չ���" << endl;
	cout << "Ҫǿ��" << new_development_concept << "�ķ�չ����" << endl;
}

int main()
{
	char stage[200], pattern[200], concept[200];

	cout << "���������뷢չ�׶Σ���չ��֣���չ����" << endl;
	cin >> stage;
	cin >> pattern;
	cin >> concept;

	Suggestions mSuggestion(stage, pattern, concept);
	mSuggestion.show();
    return 0;
}

