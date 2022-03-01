#include "Zombie.hpp"
#define LOG(x) std::cout << x << std::endl

int main(void)
{
	Zombie father = Zombie();
    father.name = "dad";
	LOG("\n");
	Zombie *son = newZombie("son");
	son->announce();
	LOG("\n");
	randomChump("snowSon");
	LOG("\n");
	delete(son);
	return 0;
}
