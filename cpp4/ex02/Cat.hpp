#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include <string>

# include "Animal.hpp"
class Cat : public Animal
{
	public:
	virtual void makeSound(void) const;
	Brain *brain;

	Cat();
	virtual ~Cat();
	Cat(const Cat &o);
	Cat &operator= (const Cat &o);
};

#endif // Cat_HPP
