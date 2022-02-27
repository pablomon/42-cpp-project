#include "Animal.hpp"
#include <iostream>

Animal::Animal() {
	std::cout << "default constructor Animal\n";
	type = "Animal";

}

Animal::~Animal() {
	std::cout << "destructor Animal\n";
}

Animal::Animal(const Animal &o) {
	std::cout << "copy constructor Animal\n";
	type = o.type;
}

Animal &Animal::operator=(const Animal &o) {
	if (this == &o)
		return *this;
	type = o.type;
	return *this;
}

std::string Animal::getType(void) const
{
	return type;
}