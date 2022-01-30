#if !defined(DOG_HPP)
#define DOG_HPP
# include "Animal.hpp"
class Dog : public Animal
{
	public:
	Brain *brain;
	virtual void makeSound(void) const;

	Dog();
	virtual ~Dog();
	Dog(const Dog &o);
	Dog &operator= (const Dog &o);
};

#endif // DOG_HPP
