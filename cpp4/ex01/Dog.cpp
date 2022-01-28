#include <iostream>
#include "Dog.hpp"

Dog::Dog() {
	std::cout << "default constructor Dog\n";
	type = "Dog";
}

Dog::~Dog() {
	std::cout << "destructor Dog\n";
}

Dog::Dog(const Dog &o) {
	std::cout << "copy constructor Dog\n";
	type = o.type;
}

Dog &Dog::operator=(const Dog &Dog) {
	if (this == &Dog)
		return *this;
	type = Dog.type;
	return *this;
}

void Dog::makeSound() const {
	std::cout << "WAAAAUUU\n";
}