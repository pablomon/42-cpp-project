#include <iostream>
#include <algorithm>
#include <vector>
#include <unistd.h>

#include "span.hpp"

int main()
{
	std::cout << "Test with known numbers: " << std::endl;
	span s = span(10);
	s.addNumber(-10);
	s.addNumber(10);
	s.addNumber(20);
	std::cout << "Shortest span = " << s.shortestSpan() << std::endl;
	std::cout << "Longest span = " << s.longestSpan() << std::endl;

	size_t n = 100000;
	std::cout << "\nTest with " << n << " ramdom numbers:" << std::endl;
	s = span(n);
	std::vector<int> v;
	int min = -1, max = -1, min2 = 1001;
	std::srand(getpid());
	for (size_t i = 0; i < n; i++)
	{
		int rnd = rand() % 1000000;
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
	std::cout << "Shortest span = " << s.shortestSpan() << std::endl;
	std::cout << "Longest span = " << s.longestSpan() << std::endl;

	std::cout << "\nTest with span only one value:" << std::endl;
	try
	{
		s = span(1);
		s.addNumber(10);
		std::cout << "Shortest span = " << s.shortestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "\nTest trying to add more numbers than size:" << std::endl;
	try
	{
		std::cout << "Span size = 1" << std::endl;
		s = span(1);
		std::cout << "Trying to add number.." << std::endl;
		s.addNumber(34);
		std::cout << "Trying to add number.." << std::endl;
		s.addNumber(10);
		std::cout << "Two numbers added" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

    return 0;
}
