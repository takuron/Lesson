// 15-5.cpp : 定义控制台应用程序的入口点。
//

// CppProgrammingTask
// Author: takuron@github.com

#include "stdafx.h"

template<class Type1,class Type2>
class myclass
{
public:
	myclass(Type1 a,Type2 b);
	void show();

private:
	Type1 i;
	Type2 j;
};
template<class Type1, class Type2>
myclass<Type1, Type2>::myclass(Type1 a, Type2 b)
{
	i = a;
	j = b;
}

template<class Type1, class Type2>
void myclass<Type1, Type2>::show()
{
	cout << i << ' ' << j << endl;
}


int main()
{
	myclass<int, double> obj1(86, 175.2);
	myclass<char, char*> obj2('m', "Zhejiang University");
	obj1.show();
	obj2.show();
	return 0;
}
