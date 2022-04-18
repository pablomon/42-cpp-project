#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	{
		std::cout << "Right animals:" << std::endl;
		const Animal* meta = new Animal();
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;

		i->makeSound(); //will output the cat sound!
		j->makeSound();
		meta->makeSound();

		delete meta;
		delete j;
		delete i;
	}

	{
		std::cout << "\nWrong animals:" << std::endl;
		const WrongAnimal* wrong_meta = new WrongAnimal();
		const WrongAnimal* wrong_i = new WrongCat();

		std::cout << wrong_meta->getType() << "\n";
		std::cout << wrong_i->getType() << std::endl;

		wrong_meta->makeSound();
		wrong_i->makeSound();

		delete wrong_meta;
		delete wrong_i;
	}

}
