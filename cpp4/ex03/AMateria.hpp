#if !defined(AMATERIA_HPP)
# define AMATERIA_HPP

# include <string>
# include <iostream>
class AMateria;
# include "ICharacter.hpp"

class AMateria
{
	protected:
	std::string type;

	public:
	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);

	// Canonic form
	AMateria();
	AMateria(std::string const & type);
	virtual ~AMateria();
	AMateria(const AMateria &o);
	AMateria &operator= (const AMateria &o);
	};

#endif // AMATERIA_HPP