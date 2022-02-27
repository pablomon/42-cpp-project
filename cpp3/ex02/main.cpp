#include <iostream>
#include "FragTrap.hpp"

int	main()
{
	std::cout << "Instanciating ClapTrap.." << std::endl;
	ClapTrap	ct88("ct88");
	ct88.attack("dummy");
	std::cout << std::endl << "Instanciating FragTrap.." << std::endl;
	FragTrap	ftxx("ftxx");
	ftxx.attack("dummy");
	ftxx.print();
	ftxx.takeDamage(10);
	ftxx.beRepaired(5);
	ftxx.highFivesGuys();
	
	ftxx.print();
	return 0;
}
