#include <iostream>
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main(void)
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;

	std::cout << std::endl << "Creating some materias..." << std::endl;
	AMateria *ice, *cure;
	ice = new Ice();
	cure = new Cure();
	Character *rigo = new Character("Rigoberto");
	rigo->equip(ice);
	rigo->equip(cure);

	rigo->unequip(0);
	rigo->unequip(0);
	rigo->unequip(1);

	delete rigo;
	delete ice;
	delete cure;
	return 0;



	
	return 0;
}
