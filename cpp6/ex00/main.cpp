// #include <string>
#include <iostream>
#include <sstream>
#include "converter.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Wrong args\n";
		return 1;
	}
	std::string str(argv[1]);
	convert(str);
	return 0;
}
