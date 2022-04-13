#include "Character.hpp"

Character::Character(std::string name) {
	std::cout << "argument constructor Character\n";
	this->name = name;
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
}

Character::Character() {
	std::cout << "default constructor Character\n";
	name = "nameless";
	for (int i = 0; i < 4; i++)
		inventory[i] = NULL;
}

Character::~Character() {
	std::cout << "destructor Character\n";
	for (int i = 0; i < 4; i++)
		if (inventory[i])
			delete inventory[i];
}

Character::Character(const Character &o) {
	std::cout << "copy constructor Character\n";
	name = o.getName();
	for (int i = 0; i < 4; i++)
		inventory[i] = o.inventory[i]->clone();
}

Character &Character::operator=(const Character &o) {
	std::cout << "operator = Character\n";
	if (this == &o)
		return *this;
	name = o.getName();
	for (int i = 0; i < 4; i++)
		if (inventory[i])
			delete inventory[i];
	for (int i = 0; i < 4; i++)
		inventory[i] = o.inventory[i]->clone();
	return *this;
}

std::string const &Character::getName() const {
	return name;
}

void Character::equip(AMateria *m) {

	for (int i = 0; i < 4; i++)
	{
		if (!inventory[i])
		{
			inventory[i] = m;
			std::cout << name << " equiped " << m->getType() << std::endl;
			return ;
		}
	}
	std::cout << name << " has no space for equipping " << m->getType() << std::endl;
}

void Character::unequip(int idx) {
	if (inventory[idx])
		std::cout << name << " unequipping materia in " << idx << std::endl;
	inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter &target) {
	if (inventory[idx])
	{
		std::cout << name << " using materia " << idx << " on " << target.getName() << std::endl;
		inventory[idx]->use(target);
	}
	else
		std::cout << name << " has no materia on position " << idx << std::endl;
}
