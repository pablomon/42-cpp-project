#include <iostream>
#include "ScavTrap.hpp"

int	main()
{
	std::cout << "Instanciating ClapTrap.." << std::endl;
	ClapTrap	ct88("ct88");
	ct88.attack("dummy");
	std::cout << std::endl << "Instanciating ScavTrap.." << std::endl;
	ScavTrap	st123("st123");
	st123.attack("dummy");
	st123.print();
	st123.takeDamage(2);
	st123.beRepaired(10);
	st123.guardGate();
	
	st123.print();
	return 0;
}
