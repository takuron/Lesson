#include "ConfFiles.h"

ConfFile::ConfFile(string p, int t)
{
	setConf(p, t);
}

ConfFile::ConfFile()
{
}


//�������캯��
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

	//д��ע��
	wStream << "# Made by ConfWritter" << endl;

	wStream << endl;

	if (getSectionsSzie() > 0) {
		int i;

		//д��ÿ����
		for (i = 0; i < getSectionsSzie(); i++) {
			ConfSection mSection = getSection(i);

			//_default�ڽ������н�����
			if (mSection.getKey() != "_default") {
				wStream << "[" << mSection.getKey() << "]" << endl << endl;
			}

			//ֻ�д���һ����Ľڲſ�ʼд��
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
		throw FileError("�ļ���ʧ��!");
	}

	string temp;

	ConfSection nSection("_default");

	//��������ÿһ��
	while (!rStream.eof()) {		

		getline(rStream, temp);
		
		//ȥ��ע��
		if (temp.find_first_of('#')<=temp.size()) {
			temp.erase(temp.begin()+temp.find_first_of('#'),temp.end());
		}

		//����ǲ��ǿ���
		if (temp.find_first_not_of(' ')>temp.size()) {
			
		}
		//����ǲ����µ�һ��
		else if (temp.at(temp.find_first_not_of(' ')) == '[') {
			string key = temp.substr(temp.find_first_of('[')+1, temp.find_first_of(']')- temp.find_first_of('[')-1);
			ConfSection newConfsection(key);
			addSection(nSection);
			nSection = newConfsection;
		}
		//����Ƿ�Ӧ�����Ӽ���ֵ
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
