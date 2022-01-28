#if !defined(BRAIN_HPP)
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
	public:
	std::string ideas[100];

	Brain();
	~Brain();
	Brain(const Brain &o);
	Brain &operator= (const Brain &o);
};

#endif // BRAIN_HPP
