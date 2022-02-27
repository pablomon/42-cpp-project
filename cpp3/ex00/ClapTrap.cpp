#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string const &Name)
{
	std::cout << "constructor with arg\n";
	name = Name;
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
}

ClapTrap::ClapTrap(void)
{
	std::cout << "default constructor\n";
	name = "Unnamed";
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &ct)
{
	std::cout << "copy constructor\n";
	name = ct.name;
	hitPoints = ct.hitPoints;
	energyPoints = ct.energyPoints;
	attackDamage = ct.attackDamage;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &ct)
{
	std::cout << "assignment operator\n";
	name = ct.name;
	hitPoints = ct.hitPoints;
	energyPoints = ct.energyPoints;
	attackDamage = ct.attackDamage;
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "destructor " << name << std::endl;
}

void	ClapTrap::attack(std::string const &target)
{
	std::cout << "ClapTrap " << name << " attacks " << target 
	<< " causing "	<< attackDamage << " points of damage!" << std::endl;
	energyPoints--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << name << " takes " << amount << " points of damage!\n";
	hitPoints -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << name << " gets " << amount << " points of repair\n";
	hitPoints += amount;
}
