#include "Animal.hpp"
#include <iostream>

Animal::Animal() {
	std::cout << "default constructor Animal\n";
	type = "Animal";
	brain = new Brain;
}

Animal::~Animal() {
	std::cout << "destructor Animal\n";
}

Animal::Animal(const Animal &o) {
	std::cout << "copy constructor Animal\n";
	type = o.type;
	brain = o.brain;
}

Animal &Animal::operator=(const Animal &o) {
	if (this == &o)
		return *this;
	type = o.type;
	brain = o.brain;
	return *this;
}

std::string Animal::getType(void) const
{
	return type;
}

void Animal::makeSound() const {
	std::cout << "???\n";
}