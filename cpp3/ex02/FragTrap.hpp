#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	public:

	void attack(std::string const &target);
	void highFivesGuys(void);

	FragTrap(std::string const &Name);
	FragTrap();
	~FragTrap();
	FragTrap(const FragTrap &st);
	FragTrap	&operator=(const FragTrap &st);
};

#endif
