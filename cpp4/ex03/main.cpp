#include <iostream>
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main(void)
{
	std::cout << "Creting materia and source materia" << std::endl;
	IMateriaSource* src = new MateriaSource();
	Ice *icep = new Ice();
	Cure *curep = new Cure();
	std::cout << std::endl;

	std::cout << "Source learns materia" << std::endl;
	src->learnMateria(icep);
	src->learnMateria(curep);
	std::cout << std::endl;

	std::cout << "Creting a player" << std::endl;
	ICharacter* me = new Character("me");

	std::cout << "Giving some equipment to the player" << std::endl;
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	std::cout << std::endl;

	std::cout << "Creting a sparring NPC" << std::endl;
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	std::cout << std::endl;

	delete bob;
	delete me;
	delete src;

	std::cout << std::endl << "Creating some materias..." << std::endl;
	AMateria *ice, *cure;
	ice = new Ice();
	cure = new Cure();
	Character *rigo = new Character("Rigoberto");
	std::cout << std::endl;
	rigo->equip(ice);
	rigo->equip(cure);

	rigo->unequip(0);
	rigo->unequip(0);
	rigo->unequip(1);

	delete rigo;
	delete ice;
	delete cure;

	return 0;
}
