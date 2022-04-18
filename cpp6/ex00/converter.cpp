/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmontese <pmontese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 22:00:35 by pmontese          #+#    #+#             */
/*   Updated: 2022/04/18 17:09:44 by pmontese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "converter.hpp"

Converter::Converter(const std::string str) : str(str) {
	print_char(str);
	print_int(str);
	print_float(str);
	print_double(str);
}
Converter::~Converter() {};
Converter::Converter(const Converter &o) { this->str = o.str; }
Converter &Converter::operator= (const Converter &o) {
	this->str = o.str;
	return *this;
};

void Converter::print_char(std::string str)
{
	std::cout << "char : ";
	try {
		double d = std::stod(str);
		if (d < 0 || d > 255)
		{
			std::cout << "Impossible" << std::endl;
			return;
		}
		char c = static_cast<char> (d);
		if (isprint(c))
			std::cout << "'" << c << "'" << std::endl;
		else
			std::cout << "Non displayable" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "Impossible" << std::endl;
	}
}

void Converter::print_int(std::string str)
{
	std::cout << "int: ";
	try {
		int integer = static_cast<int>(std::stoi(str));
		std::cout << integer << "\n";
	}
	catch(const std::invalid_argument &e)
	{
		std::cout << "Impossible" << std::endl;
	}
	catch(const std::out_of_range &e)
	{
		std::cout << "Non displayable" << std::endl;
	}
}
void Converter::print_float(std::string str){
	std::cout << "float: ";
	try
	{
		float floating = static_cast<float>(std::stof(str));
		std::cout << floating;
		if (static_cast<int>(floating) == floating)
			std::cout << ".0";
		std::cout << "f" << std::endl;
	}
	catch(const std::invalid_argument &e)
	{
		std::cout << "Impossible" << std::endl;
	}
	catch(const std::out_of_range &e)
	{
		std::cout << "Non displayable" << std::endl;
	}
}
void Converter::print_double(std::string str){
	std::cout << "double: ";
	try
	{
		double d = static_cast<double>(std::stod(str));
		std::cout << d;
		if (static_cast<int>(d) == d)
			std::cout << ".0";
		std::cout << std::endl;
	}
	catch(const std::invalid_argument &e)
	{
		std::cout << "Impossible" << std::endl;
	}
	catch(const std::out_of_range &e)
	{
		std::cout << "Non displayable" << std::endl;
	}
}
