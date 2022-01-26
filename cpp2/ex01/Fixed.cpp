/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmontese <pmontes@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 23:35:18 by pmontese          #+#    #+#             */
/*   Updated: 2022/01/26 19:27:10 by pmontese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int i)
{
	std::cout << "Int constructor called\n";
	value = i * (1 << point);
}

Fixed::Fixed(const float f)
{
	std::cout << "Float constructor called\n";
	value = roundf(f * (1 << point));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &f)
{
	std::cout << "Copy constructor called" << std::endl;
	value = f.getRawBits();
}

void Fixed::operator = (const Fixed &f)
{
	std::cout << "Assignation operation called" << std::endl;
	value = f.getRawBits();
}

int Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return value;
}

void Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	value = raw;
}

std::ostream	&operator<<(std::ostream &os, const Fixed &v)
{
	os << v.toFloat();
	return os;
}

float Fixed::toFloat(void) const
{
	return (float)value / (float)(1 << point);
}

int Fixed::toInt(void) const
{
	return (int)value / (1 << point);
}