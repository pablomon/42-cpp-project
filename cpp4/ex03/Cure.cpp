#include "Cure.hpp"

Cure::Cure() {
	std::cout << "default constructor Cure\n";
	type = "cure";
}

// constructor, copy constructor & assignment will use base clase

AMateria *Cure::clone() const {
	AMateria *amateria = new Cure(*this);
	return amateria;
}

void Cure::use(ICharacter &target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
