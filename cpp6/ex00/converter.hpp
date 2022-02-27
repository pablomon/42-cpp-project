#ifndef CONVERTER_HPP
# define CONVERTER_HPP

# include <string>
# include <iostream>
# include <math.h>
# include <ctype.h>

class Converter
{
	private:
	std::string str;
	char	cinput;
	int		iinput;
	float	finput;
	double	dinput;
	int		type = -1; // 0 = char .. 3 = double
	double	values[4];

	public:
	Converter(const std::string);
	~Converter();
	Converter &operator= ( Converter const & other );

	private:
	void print();
	public:
	void print_char();
	void print_int();
	void print_float();
	void print_double();
};

#endif