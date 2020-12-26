#include "ConfSections.h"


template<typename T>
inline ConfSection<T>::ConfSection(string n)
{
	name = n;
}

template<typename T>
int ConfSection<T>::removeItem(string k)
{
	int i;
	for (i = 0; i < items.size(); i++) {
		if (items[i].getKey() == k) {
			items.erase(i);
			return 1;
		}
	}
	return 0;
}


