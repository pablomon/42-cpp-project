// #include <string>
#include <iostream>
#include <sstream>
#include "converter.hpp"

void	convert(std::string str)
{
	// std::stringstream ss;
	// ss << str;
	// if (ss.fail()) 
	// { 
	// 	std::cout << "Error\n";
	// 	return; 
	// }
	// double dinput;
	// ss >> dinput;
	// char cinput = (char)dinput;
	// std::cout << "char: " << cinput << "\n";
	// int iinput = (int)dinput;
	// std::cout << "integer: " << iinput << "\n";
	// float finput = (float)dinput;
	// std::cout << "float: " << finput << "\n";
	// std::cout << "double: " << dinput << "\n\n";

	Converter converter(str);
	// converter.print_char();
}

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
