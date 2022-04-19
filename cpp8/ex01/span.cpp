#include "span.hpp"
#include <algorithm>
#include <iostream>

span::span(unsigned int size) : size(size) { }
span::span(const span& other)
{
	size = other.size;
	container.clear();
	container = other.container;
}

span::~span() {
	container.clear();
}

span& span::operator= (const span& other)
{
	if (this != &other)
	{
		container.clear();
		container = other.container;
		size = other.size;
	}
	return *this;
}

const char* span::SpanException::what() const throw ()
{
	return "Span exception";
}

void span::addNumber(int n)
{
	if (container.size() >= size)
		throw SpanException();
	container.push_back(n);
}

unsigned int span::shortestSpan()
{
	if (container.size() < 2)
		throw SpanException();

	std::sort(container.begin(), container.end());
	int diff = *(container.begin() + 1) - *container.begin();
	return (std::abs(diff));
}

unsigned int span::longestSpan()
{
	if (container.size() < 2)
		throw SpanException();
	std::sort(container.begin(), container.end());
	int diff = *(container.end() - 1) - *container.begin();
	return (std::abs(diff));
}
