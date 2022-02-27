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

FragTrap::FragTrap(const FragTrap &st)
{
	std::cout << "copy FragTrap constructor\n";
	*this = st;
}

FragTrap &FragTrap::operator=(const FragTrap &st)
{
	std::cout << "FragTrap assignment operator\n";
	if (this == &st)
		return *this;
	name = st.name;
	hitPoints = st.hitPoints;
	energyPoints = st.energyPoints;
	attackDamage = st.attackDamage;
	return *this;
}

void	FragTrap::highFivesGuys(void) 
{ 
	std::cout << "High five you guys!\n"; 
}
