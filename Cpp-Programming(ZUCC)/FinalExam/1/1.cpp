// 1.cpp : 定义控制台应用程序的入口点。
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
	cout << "我国处于：" << new_development_stage << "的发展阶段" << endl;
	cout << "要构建：" << new_developemnt_pattern << "的发展格局" << endl;
	cout << "要强化" << new_development_concept << "的发展理念" << endl;
}

int main()
{
	char stage[200], pattern[200], concept[200];

	cout << "请依次输入发展阶段，发展格局，发展理念" << endl;
	cin >> stage;
	cin >> pattern;
	cin >> concept;

	Suggestions mSuggestion(stage, pattern, concept);
	mSuggestion.show();
    return 0;
}

