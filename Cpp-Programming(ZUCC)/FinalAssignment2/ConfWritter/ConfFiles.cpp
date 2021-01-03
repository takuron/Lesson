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
	path = p;
}

void ConfFile::save()
{
	ofstream wStream(path.c_str());

	//写入注释
	wStream << "# Made by ConfWritter" << endl;

	wStream << endl;

	if (getSectionsSzie() > 0) {
		int i;

		//写入每个节
		for (i = 0; i < getSectionsSzie(); i++) {
			ConfSection mSection = getSection(i);

			//_default节将不会有节名称
			if (mSection.getKey() != "_default") {
				wStream << "[" << mSection.getKey() << "]" << endl << endl;
			}

			//只有大于一个项的节才开始写项
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

void ConfFile::read()
{
	ifstream rStream(path.c_str());

	if (!rStream.is_open()) {
		throw FileError("文件打开失败!");
	}

	string temp;

	ConfSection nSection("_default");

	//遍历读入每一行
	while (!rStream.eof()) {		

		getline(rStream, temp);
		
		//去除注释
		if (temp.find_first_of('#')<=temp.size()) {
			temp.erase(temp.begin()+temp.find_first_of('#'),temp.end());
		}

		//检测是不是空行
		if (temp.find_first_not_of(' ')>temp.size()) {
			
		}
		//检测是不是新的一节
		else if (temp.at(temp.find_first_not_of(' ')) == '[') {
			string key = temp.substr(temp.find_first_of('[')+1, temp.find_first_of(']')- temp.find_first_of('[')-1);
			ConfSection newConfsection(key);
			addSection(nSection);
			nSection = newConfsection;
		}
		//检测是否应当增加键对值
		else if (temp.find_first_of('=')<temp.size()) {

			string firstpart = temp.substr(temp.find_first_not_of(' '), temp.find_first_of('=')- temp.find_first_not_of(' '));
			string key = firstpart.substr(0, firstpart.find_last_not_of(' ')+1);

			string lastpart = temp.substr(temp.find_first_of('=')+2, temp.find_last_not_of(' ')- temp.find_first_of('='));
			string val = lastpart.substr(lastpart.find_first_not_of(' '), lastpart.size() - lastpart.find_first_not_of(' '));
			ConfItem mItem(key,val);

			nSection.addItem(mItem);
		}

	}
	addSection(nSection);
	rStream.close();
}

void ConfFile::addSection(ConfSection section)
{
	sections.push_back(section);
}

void ConfFile::changeSection(ConfSection section, int i)
{
	sections[i] = section;
}

void ConfFile::removeSection(int i)
{
	sections.erase(begin(sections) + i);
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

FileError::FileError(string msg)
{
	message = msg;
}

string FileError::getError()
{
	return string(message);
}
