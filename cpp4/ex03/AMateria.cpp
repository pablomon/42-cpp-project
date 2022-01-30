#include "AMateria.hpp"

std::string const &AMateria::getType() const
{
	return (type);
}

void AMateria::use(ICharacter& target)
{
	(void)target;
}

AMateria::AMateria(std::string const &type) {
	std::cout << "argument constructor AMateria\n";
	this->type = type;
}

AMateria::AMateria() {
	std::cout << "default constructor AMateria\n";
	type = "default";
}

AMateria::AMateria(const AMateria &o) {
	std::cout << "copy constructor AMateria\n";
	type = o.getType();
}

AMateria::~AMateria() { 
	std::cout << "destructor AMateria\n"; 
}

AMateria &AMateria::operator=(const AMateria &o) {
	std::cout << "operator = AMateria\n";
	if (this == &o)
		return *this;
	type = o.getType();
	return *this;
}
