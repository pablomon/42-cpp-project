#include "Ice.hpp"

Ice::Ice() {
	std::cout << "default constructor Ice\n";
	type = "ice";
}

// constructor, copy constructor & assignment will use base clase

AMateria *Ice::clone() const {
	AMateria *amateria = new Ice(*this);
	return amateria;
}

void Ice::use(ICharacter &target) {
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}
