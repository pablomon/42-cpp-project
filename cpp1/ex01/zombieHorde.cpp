#include "Zombie.hpp"
#include <sstream>

Zombie *zombieHorde(int n, std::string name)
{
	std::string s;

	Zombie *p = new Zombie[n];
	for (int i = 0; i < n; i++)
	{
		std::ostringstream oss;
		oss << i;
		s = name + oss.str();
		p[i].name = s;
	}

	return p;
}
