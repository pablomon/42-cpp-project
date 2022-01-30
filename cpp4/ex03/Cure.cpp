#include "Cure.hpp"

Cure::Cure() {
	std::cout << "default constructor Cure\n";
	type = "cure";
}

// Cure::~Cure() { std::cout << "destructor Cure\n"; }

// Cure::Cure(const Cure &cure) {
// 	std::cout << "copy constructor Cure\n";
// 	*this = cure;
// }

// Cure &Cure::operator=(const Cure &cure) {
// 	std::cout << "operator = Cure\n";
// 	if (this == &cure)
// 		return *this;
// 	return *this;
// }

AMateria *Cure::clone() const {
	AMateria *amateria = new Cure(*this);
	return amateria;
}

void Cure::use(ICharacter &target) {
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}
