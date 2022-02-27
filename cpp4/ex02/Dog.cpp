#include <iostream>
#include "Dog.hpp"

Dog::Dog() {
	std::cout << "default constructor Dog\n";
	type = "Dog";
	brain = new Brain();
}

Dog::~Dog() {
	std::cout << "destructor Dog\n";
	delete brain;
}

Dog::Dog(const Dog &o) {
	std::cout << "copy constructor Dog\n";
	type = o.type;
	brain = new Brain(*o.brain);
}

Dog &Dog::operator=(const Dog &o) {
	if (this == &o)
		return *this;
	type = o.type;
	brain = o.brain;
	return *this;
}

void Dog::makeSound() const {
	std::cout << "WAAAAUUU\n";
}