#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <typeinfo>

template <typename T>
void swap(T &item1, T &item2)
{
	T tmp;

	tmp = item1;
	item1 = item2;
	item2 = tmp;
};

template <typename T>
T min(T &item1, T &item2)
{
	if (item1 >= item2)
		return item2;
	return item1;
};

template <typename T>
T max(T &item1, T &item2)
{
	if (item1 <= item2)
		return item2;
	return item1;
};

#endif
