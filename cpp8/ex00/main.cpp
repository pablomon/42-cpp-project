#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#define LOG(x) std::cout << x << std::endl

#include "easyfind.hpp"

int main()
{
    std::vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);

	LOG("vector initialized with :");
	for (std::vector<int>::iterator it = v.begin(); it < v.end(); it++)
		std::cout << *it << ", ";

	LOG("\nFinding value 2:");
	std::vector<int>::iterator it = easyfind(v, 2);
	LOG(*it);

	try
	{
		LOG("Finding value 123:");
		std::vector<int>::iterator it = easyfind(v, 123);
		LOG(*it);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	// it would also work with a list
	
    return 0;
}
