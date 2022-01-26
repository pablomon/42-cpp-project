#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap: public virtual ClapTrap
{
	public:

	void attack(std::string const &target);
	void guardGate();

	ScavTrap(std::string const &Name);
	ScavTrap();
	~ScavTrap();
	ScavTrap(const ScavTrap &st);
	ScavTrap	&operator=(const ScavTrap &st);
};

#endif
