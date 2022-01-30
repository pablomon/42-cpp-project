#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	std::cout << "default constructor MateriaSource\n";
	for (int i = 0; i < 4; i++)
		inventory[i] = 0;
}

MateriaSource::~MateriaSource() {
	std::cout << "destructor MateriaSource\n";
	for (int i = 0; i < 4; i++)
		if (inventory[i])
			delete inventory[i];
}

MateriaSource::MateriaSource(const MateriaSource &materiaSource) {
	std::cout << "copy constructor MateriaSource\n";
	*this = materiaSource;
}

MateriaSource &MateriaSource::operator=(const MateriaSource &materiaSource) {
	std::cout << "operator = MateriaSource\n";
	if (this == &materiaSource)
		return *this;
	for (int i = 0; i < 4; i++)
		if (inventory[i])
			delete inventory[i];
	for (int i = 0; i < 4; i++)
		inventory[i] = materiaSource.inventory[i]->clone();
	return *this;
}

void MateriaSource::learnMateria(AMateria *amateria) {
	for (int i = 0; i < 4; i++)
		if (!inventory[i]) {
			inventory[i] = amateria;
			return ;
		}
}

AMateria *MateriaSource::createMateria(std::string const &type) {
	for (int i = 0; i < 4; i++)
		if (inventory[i] && inventory[i]->getType() == type)
			return inventory[i]->clone();
	return 0;
}
