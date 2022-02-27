#include "ClapTrap.hpp"

int	main()
{
	ClapTrap	fl4k;
	ClapTrap	gg8k("gg8k");

	fl4k.attack("gg8k");
	gg8k.takeDamage(0);
	gg8k.attack("fl4k");
	fl4k.takeDamage(0);

	fl4k.takeDamage(2);
	fl4k.beRepaired(2);
	gg8k.takeDamage(3);
	gg8k.beRepaired(4);

	return 0;
}
