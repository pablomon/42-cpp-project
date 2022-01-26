#include "FragTrap.hpp"

FragTrap::FragTrap(std::string const &Name) : ClapTrap(Name)
{
	std::cout << "FragTrap constructor with arg\n"; 
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
}

FragTrap::FragTrap() : ClapTrap() 
{ 
	std::cout << "default FragTrap constructor\n";
	hitPoints = 100;
	energyPoints = 100;
	attackDamage = 30;
}

void	FragTrap::attack(std::string const &target)
{
	std::cout << "FragTrap " << name << " attacks " << target 
	<< " causing "	<< attackDamage << " points of damage!" << std::endl;
	energyPoints--;
}

FragTrap::~FragTrap() { 
	std::cout << "FragTrap destructor " << name << std::endl; 
}

FragTrap::FragTrap(const FragTrap &o)
{
	std::cout << "copy FragTrap constructor\n";
	name = o.name;
	hitPoints = o.hitPoints;
	energyPoints = o.energyPoints;
	attackDamage = o.attackDamage;
}

FragTrap &FragTrap::operator=(const FragTrap &ft)
{
	std::cout << "FragTrap assignment operator\n";
	if (this == &ft)
		return *this;
	name = ft.name;
	hitPoints = ft.hitPoints;
	energyPoints = ft.energyPoints;
	attackDamage = ft.attackDamage;
	return *this;
}

void	FragTrap::highFivesGuys(void) 
{ 
	std::cout << "High five you guys!\n"; 
}
