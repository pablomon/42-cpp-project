/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmontese <pmontese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 23:35:18 by pmontese          #+#    #+#             */
/*   Updated: 2022/03/03 21:23:17 by pmontese         ###   ########.fr       */
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

std::ostream	&operator << (std::ostream &os, const Fixed &v)
{
	os << v.toFloat();
	return os;
}

float Fixed::toFloat(void) const
{
	return (float)value / (float)(1 << point);
}

int Fixed::toInt(void) const {	return (int)value / (1 << point); }

bool Fixed::operator > (const Fixed &f) const { return (value > f.getRawBits()); }

bool Fixed::operator < (const Fixed &f) const { return (value < f.getRawBits()); }

bool Fixed::operator >= (const Fixed &f) const { return (value >= f.getRawBits()); }

bool Fixed::operator <= (const Fixed &f) const { return (value <= f.getRawBits()); }

bool Fixed::operator == (const Fixed &f) const { return (value == f.getRawBits()); }

bool Fixed::operator != (const Fixed &f) const { return (value == f.getRawBits()); }

Fixed Fixed::operator + (const Fixed &f)
{
	Fixed res;
	res.setRawBits(value + f.getRawBits());
	return res;
}

Fixed Fixed::operator - (const Fixed &f)
{
	Fixed res;
	res.setRawBits(value - f.getRawBits());
	return res;
}

Fixed Fixed::operator * (const Fixed &f)
{
	Fixed res;
	res.setRawBits(this->toFloat() * f.toFloat());
	return res;
}

Fixed Fixed::operator / (const Fixed &f)
{
	Fixed res;
	res.setRawBits(this->toFloat() / f.toFloat());
	return res;
}

Fixed &Fixed::operator ++ ()
{
	value ++;
	return *this;
}

Fixed &Fixed::operator -- ()
{
	value ++;
	return *this;
}

Fixed Fixed::operator ++ (int n)
{
	return Fixed(this->getRawBits() + n);
}

Fixed Fixed::operator -- (int n)
{
	return Fixed(this->getRawBits() - n);
}

Fixed &Fixed::min(Fixed &f1, Fixed &f2) { return (f1 < f2 ? f1 : f2); }
Fixed &Fixed::max(Fixed &f1, Fixed &f2) { return (f1 > f2 ? f1 : f2); }
const Fixed &Fixed::min(const Fixed &f1, const Fixed &f2) { return (f1 < f2 ? f1 : f2); }
const Fixed &Fixed::max(const Fixed &f1, const Fixed &f2) { return (f1 > f2 ? f1 : f2); }
