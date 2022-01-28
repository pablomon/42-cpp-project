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
	Animal dog;
	create_sentences(&(dog.brain), "idea ");
	Animal dog2 = dog;
	
	for (size_t i = 0; i < 100; i++)
	{
		std::cout << dog2.brain.ideas[i] << std::endl;
	}

	return 0;
}
