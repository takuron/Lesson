#include "ConfFiles.h"

ConfFile::ConfFile(string p, int t)
{
	setConf(p, t);
}

ConfFile::ConfFile()
{
}


//拷贝构造函数
ConfFile::ConfFile(const ConfFile & mFile)
{
	path = mFile.path;
	sections = mFile.sections;
}

void ConfFile::setConf(string p, int t)
{
	if (t == TYPE_WRITE) {
		path = p;
	}
}

void ConfFile::save()
{
	ofstream wStream(path.c_str());

	//写入注释
	wStream << "#Made by ConfWritter" << endl;

	wStream << endl;

	if (getSectionsSzie() > 0) {
		int i;
		for (i = 0; i < getSectionsSzie(); i++) {
			ConfSection mSection = getSection(i);

			if (mSection.getKey() != "_default") {
				wStream << "[" << mSection.getKey() << "]" << endl << endl;
			}

			if (mSection.getSectionSize() > 0) {
				int j;
				vector<ConfItem> mIlist = mSection.getConfItemList();
				for (j = 0; j < mSection.getSectionSize(); j++) {
					wStream << mIlist[j].toString();
				}
			}
			wStream << endl;
		}
	}

	wStream.close();
}

void ConfFile::addSection(ConfSection section)
{
	sections.push_back(section);
}

void ConfFile::changeSection(ConfSection section, int i)
{
	sections[i] = section;
}

vector<ConfSection> ConfFile::getSectionList()
{
	return vector<ConfSection>(sections);
}

ConfSection ConfFile::getSection(int i)
{
	return sections[i];
}

string ConfFile::getPath()
{
	return string(path);
}

int ConfFile::getSectionsSzie()
{
	return sections.size();
}


