#pragma once

#include "stdafx.h"
#include "ConfSections.h"

class ConfFile
{
public:
	ConfFile(string path, int type); 
	ConfFile();

	ConfFile(const ConfFile& mFile);

	void setConf(string path, int type);
	void save();

	void addSection(ConfSection section);
	void changeSection(ConfSection section,int i);

	vector<ConfSection> getSectionList();
	ConfSection getSection(int i);
	string getPath();
	int getSectionsSzie();

	static const int TYPE_READ = 1;
	static const int TYPE_WRITE = 2;

private:
	string path;
	vector<ConfSection> sections;
};