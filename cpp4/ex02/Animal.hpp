#if !defined(ANIMAL_HPP)
#define ANIMAL_HPP

# include <string>
# include "Brain.hpp"

class Animal
{
	protected:
	std::string type;

	public:
	virtual void makeSound(void) const = 0;
	std::string getType(void) const;

	Animal();
	virtual ~Animal();
	Animal(const Animal &o);
	Animal &operator= (const Animal &o);
};

#endif // ANIMAL_HPP
