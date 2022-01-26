#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string const &Name) : ClapTrap(Name)
{
	std::cout << "ScavTrap constructor with arg\n"; 
	hitPoints = 100;
	energyPoints = 50;
	attackDamage = 20;
}

ScavTrap::ScavTrap() : ClapTrap() 
{ 
	std::cout << "default ScavTrap constructor\n"; 
}

void	ScavTrap::attack(std::string const &target)
{
	std::cout << "ScavTrap " << name << " attacks " << target 
	<< " causing "	<< attackDamage << " points of damage!" << std::endl;
	energyPoints--;
}

ScavTrap::~ScavTrap() { 
	std::cout << "ScavTrap destructor " << name << std::endl; 
}

ScavTrap::ScavTrap(const ScavTrap &st)
{
	std::cout << "copy ScavTrap constructor\n";
	*this = st;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &st)
{
	std::cout << "ScavTrap assignment operator\n";
	if (this == &st)
		return *this;
	name = st.name;
	hitPoints = st.hitPoints;
	energyPoints = st.energyPoints;
	attackDamage = st.attackDamage;
	return *this;
}

void	ScavTrap::guardGate() 
{ 
	std::cout << "Gate keeper mode\n"; 
}
