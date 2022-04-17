/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmontese <pmontes@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 22:00:38 by pmontese          #+#    #+#             */
/*   Updated: 2022/04/17 22:00:38 by pmontese         ###   ########.fr       */
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