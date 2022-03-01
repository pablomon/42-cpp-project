#include <iostream>
#include <algorithm>
#include <vector>
#define LOG(x) std::cout << x << std::endl

#include "span.hpp"

int main()
{
	LOG("Test with known numbers:");
	span s = span(10);
	s.addNumber(10);
	s.addNumber(20);
	s.addNumber(8);
	LOG("Shortest span:");
	LOG(s.shortestSpan());
	LOG("Longest span:");
	LOG(s.longestSpan());

	LOG("\nTest with 100 ramdom numbers:");
	s = span(100);
	std::vector<int> v;
	int min = -1, max = -1, min2 = 2000;
	for (size_t i = 0; i < 100; i++)
	{
		int rnd = rand() % 1000;
		v.push_back(rnd);
		if (min == -1)
			min = rnd;
		if (max == -1)
			max = rnd;
		min = rnd < min ? rnd : min;
		max = rnd > max ? rnd : max;
		min2 = rnd > min && rnd < min2 ? rnd : min2;
	}
	std::cout << "Minimum = " << min << std::endl;
	std::cout << "Second minimum = " << min2 << std::endl;
	std::cout << "Maximum = " << max << std::endl;
	s.addRange(v.begin(), v.end());
	LOG("Shortest span:");
	LOG(s.shortestSpan());
	LOG("Longest span:");
	LOG(s.longestSpan());	

	LOG("\nTest with span only one value:");
	try
	{
		s = span(1);
		s.addNumber(10);
		LOG(s.longestSpan());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	LOG("\nTest trying to add more numbers than size:");
	try
	{
		s = span(1);
		s.addNumber(34);
		s.addNumber(10);
		LOG(s.longestSpan());
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
    return 0;
}
