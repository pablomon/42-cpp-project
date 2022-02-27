#include "Converter.hpp"

Converter::Converter(const std::string str) : str(str) {
	print_char();
	print_int();
	print_float();
	print_double();
}
Converter::~Converter() {};
Converter &Converter::operator= (const Converter &o) {
	this->str = o.str;
	return *this;
};

void Converter::print_char()
{
	std::cout << "char : ";
	if (str.length() == 1)
	{
		if (isprint(str[0]))
			std::cout << "'" << (char)str[0] << "'\n";
		else
			std::cout << "Non displayable\n";
		return;
	}
	try {
		int integer = std::stoi(str);
		char c = (char)integer;
		if (integer >= 0 && integer <=255)
		{
			if (isprint(c))
				std::cout << "'" << c << "'\n";
			else
				std::cout << "Non displayable\n";
		}
		else
			std::cout << "Imposible\n";
	}
	catch(const std::exception& e)
	{
		std::cout << "Imposible\n";
	}
}

void Converter::print_int()
{
	std::cout << "int: ";
	try {
		int integer = (int)std::stoi(str);
		std::cout << integer << "\n";
	}
	catch(const std::exception& e)
	{
		std::cout << "Imposible\n";
	}
}
void Converter::print_float(){
	std::cout << "float: ";
	try
	{
		float floating = (float)std::stof(str);
		std::cout << floating;
		if ((int)floating == floating)
			std::cout << ".0"; 
		std::cout << "f\n";
	}
	catch(const std::exception& e)
	{
		std::cout << "Imposible\n";
	}
}
void Converter::print_double(){
	std::cout << "double: ";
	try
	{
		double num = (float)std::stod(str);
		std::cout << num;
		if ((int)num == num)
			std::cout << ".0"; 
		std::cout << "\n";
	}
	catch(const std::exception& e)
	{
		std::cout << "Imposible\n";
	}
}