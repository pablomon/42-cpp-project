// #include <string>
#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <unistd.h>

#include "Derived.hpp"

Base *generate( void )
{
	Base *obj;
	int ran;

	std::srand(getpid());
	ran = rand() % 3;

	if (ran == 0)
	{
		std::cout << "Creating class of type A\n";
		obj = new A;
	}
	if (ran == 1)
	{
		std::cout << "Creating class of type B\n";
		obj = new B;
	}
	if (ran == 2)
	{
		std::cout << "Creating class of type C\n";
		obj = new C;
	}
	return obj;
}

void identify(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "object is of class A\n";
	if (dynamic_cast<B*>(p))
		std::cout << "object is of class B\n";
	if (dynamic_cast<C*>(p))
		std::cout << "object is of class C\n";
}

int main(void)
{
	Base *b;
	b = generate();
	identify(b);
	delete b;
	
	return 0;
}
