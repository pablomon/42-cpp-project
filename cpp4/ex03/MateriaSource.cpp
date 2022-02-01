#include "MateriaSource.hpp"

MateriaSource::MateriaSource() {
	std::cout << "default constructor MateriaSource\n";
	for (int i = 0; i < 4; i++)
		memory[i] = 0;
}

MateriaSource::~MateriaSource() {
	std::cout << "destructor MateriaSource\n";
	for (int i = 0; i < 4; i++)
		if (memory[i])
			delete memory[i];
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
		if (memory[i])
			delete memory[i];
	for (int i = 0; i < 4; i++)
		memory[i] = materiaSource.memory[i]->clone();
	return *this;
}

void MateriaSource::learnMateria(AMateria *amateria) {
	for (int i = 0; i < 4; i++)
		if (!memory[i]) {
			memory[i] = amateria;
			return ;
		}
}

AMateria *MateriaSource::createMateria(std::string const &type) {
	for (int i = 0; i < 4; i++)
		if (memory[i] && memory[i]->getType() == type)
			return memory[i]->clone();
	return 0;
}
