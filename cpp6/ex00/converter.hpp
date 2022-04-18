/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmontese <pmontese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 22:00:38 by pmontese          #+#    #+#             */
/*   Updated: 2022/04/18 16:46:10 by pmontese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

	public:
	Converter(const std::string);
	~Converter();
	Converter(const Converter &o);
	Converter &operator= ( Converter const & other );

	private:
	void print();
	bool isPrintableChar(char c);
	public:
	void print_char(std::string str);
	void print_int(std::string str);
	void print_float(std::string str);
	void print_double(std::string str);
};

#endif
