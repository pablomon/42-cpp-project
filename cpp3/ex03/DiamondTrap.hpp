#if !defined(DIAMONTTRAP_HPP)
#define DIAMONTTRAP_HPP

# include "ScavTrap.hpp"
# include "FragTrap.hpp"

class DiamondTrap: public ScavTrap, public FragTrap
{
	private:
	std::string name;

	public:
	void attack(std::string const &target);
	void whoAmI(void) const;

	DiamondTrap(std::string name);
	DiamondTrap();
	DiamondTrap(const DiamondTrap &dt);
	DiamondTrap	&operator=(const DiamondTrap &dt);
	~DiamondTrap();
};

#endif // DIAMONTTRAP_HPP
