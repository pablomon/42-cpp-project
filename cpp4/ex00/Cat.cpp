#include <iostream>
#include "Cat.hpp"

Cat::Cat() {
	std::cout << "default constructor Cat\n";
	type = "Cat";
}

Cat::~Cat() {
	std::cout << "destructor Cat\n";
}

Cat::Cat(const Cat &o) {
	std::cout << "copy constructor Cat\n";
	type = o.type;
}

Cat &Cat::operator=(const Cat &Cat) {
	if (this == &Cat)
		return *this;
	type = Cat.type;
	return *this;
}

void Cat::makeSound() const {
	std::cout << "Meeeeeaaauuuuu\n";
}