#include <string>
#include <sstream>

#include "Dog.hpp"
#include "Cat.hpp"

void create_sentences(Brain &b, std::string base_s)
{
	for (int i = 0; i < 100; i++)
	{
		std::string s = base_s;
		std::stringstream stream;
		stream << s << i;
		b.ideas[i] = stream.str();
	}
}

int main(void)
{
	std::cout << "Creating animals:" << std::endl;
	const Animal *animals[4];
	for (size_t i = 0; i < 4; i++)
	{
		if (i % 2 == 0)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	std::cout << std::endl;

	std::cout << "Creating a dog:" << std::endl;
	Dog *d = new Dog();
	std::cout << std::endl;

	std::cout << "First dog idea: '" << d->brain->ideas[0] << "'\n";
	std::cout << "Change dog ideas.." << std::endl;
	create_sentences(*d->brain, "friendship idea ");
	std::cout << "New first dog idea: '" << d->brain->ideas[0] << "'\n";
	std::cout << "New 100th dog idea: '" << d->brain->ideas[99] << "'\n";
	std::cout << std::endl;

	std::cout << "Copying dog:" << std::endl;
	Dog *d2 = new Dog(*d);
	std::cout << "New dog first idea: '" << d2->brain->ideas[0] << "'\n";
	std::cout << std::endl;

	std::cout << "Deleting animals" << std::endl;
	for (size_t i = 0; i < 4; i++)
		delete animals[i];
	delete d;
	delete d2;

	return 0;
}
