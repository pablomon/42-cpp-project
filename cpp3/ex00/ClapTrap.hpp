#if !defined(CLAPTTRAP_HPP)
#define CLAPTTRAP_HPP

# include <iostream>
# include <string>

class ClapTrap
{
	private:
	std::string name;
	unsigned int hitPoints;
	unsigned int energyPoints;
	unsigned int attackDamage;

	public:
	void attack(std::string const &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	ClapTrap(std::string const &Name);
	ClapTrap();
	ClapTrap(const ClapTrap &v);
	ClapTrap &operator=(const ClapTrap &v);
	~ClapTrap();
};

#endif // CLAPTTRAP_HPP
