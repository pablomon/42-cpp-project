#include <iostream>
#include <string>
#include "array.hpp"

int main( void ) {

Array<int> intarray(3);
intarray[0] = 10;
intarray[1] = 20;
intarray[2] = 30;

for (size_t i = 0; i < intarray.get_size(); i++)
	std::cout << intarray[i] << "\n";

Array<std::string> strarray(3);
strarray[0] = std::string("Hola!");
strarray[1] = std::string("Hallo!");
strarray[2] = std::string("Kumusta!");

for (size_t i = 0; i < strarray.get_size(); i++)
	std::cout << strarray[i] << "\n";

try
{
	int outofbounds = intarray[10];
	std::cout << outofbounds << std::endl;
}
catch(const std::exception& e)
{
	std::cerr << e.what() << '\n';
}


return 0;
}