#include <iostream>
#include "Cat.hpp"

Cat::Cat() {
	std::cout << "default constructor Cat\n";
	type = "Cat";
	brain = new Brain();
}

Cat::~Cat() {
	std::cout << "destructor Cat\n";
	delete brain;
}

Cat::Cat(const Cat &o) {
	std::cout << "copy constructor Cat\n";
	type = o.type;
	brain = new Brain(*o.brain);
}

Cat &Cat::operator=(const Cat &o) {
	if (this == &o)
		return *this;
	type = o.type;
	brain = o.brain;
	return *this;
}

void Cat::makeSound() const {
	std::cout << "Meeeeeaaauuuuu\n";
}