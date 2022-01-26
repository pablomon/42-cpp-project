#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name")
{
	std::cout << "DiamondTrap constructor with arg\n";
	this->name = name + "_diamond_name";
	hitPoints = FragTrap::hitPoints;
	energyPoints = ScavTrap::energyPoints;
	attackDamage = FragTrap::attackDamage;
}

DiamondTrap::DiamondTrap() : ClapTrap("Unnamed clap trap")
{
	std::cout << "default DiamondTrap constructor\n";
	name = "Unnamed diamond trap";
	
}

void DiamondTrap::attack(std::string const &target)
{
	ScavTrap::attack(target);
}

DiamondTrap::DiamondTrap(const DiamondTrap &o)
{
	std::cout << "copy DiamondTrap constructor\n";
	name = o.name;
	hitPoints = o.hitPoints;
	energyPoints = o.energyPoints;
	attackDamage = o.attackDamage;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &o)
{
	std::cout << "DiamondTrap assignment operator\n";
	if (this == &o)
		return *this;
	name = o.name;
	hitPoints = o.hitPoints;
	energyPoints = o.energyPoints;
	attackDamage = o.attackDamage;
	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor\n";
}

void DiamondTrap::whoAmI() const
{
	std::cout << "DiamondTrap Name: " << name << std::endl;
	std::cout << "ClapTrap Name: " << ClapTrap::name << std::endl;
}