#include <iostream>
#include "diamondTrap.hpp"

int	main()
{
	std::cout << "Instanciating DiamondTrap.." << std::endl;
	DiamondTrap dt666("dt666");
	dt666.attack("dummy");
	dt666.takeDamage(6);
	dt666.beRepaired(6);
	dt666.guardGate();
	dt666.highFivesGuys();
	dt666.whoAmI();
	dt666.print();
	return 0;
}
