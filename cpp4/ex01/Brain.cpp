#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor" << std::endl;
	for (size_t i = 0; i < 100; i++)
	{
		ideas[i] = "...";
	}
}

Brain::~Brain()
{
	std::cout << "Brain destructor" << std::endl;
}

Brain::Brain(const Brain &o)
{
	std::cout << "Brain copy constructor" << std::endl;
	for (size_t i = 0; i < 100; i++)
	{
		ideas[i] = o.ideas[i];
	}
}

Brain &Brain::operator= (const Brain &o)
{
	std::cout << "operator = Brain\n";
	if (this == &o)
		return *this;
	for (size_t i = 0; i < 100; i++)
	{
		ideas[i] = o.ideas[i];
	}
	
	return *this;
}