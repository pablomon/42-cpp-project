/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmontese <pmontese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 23:35:18 by pmontese          #+#    #+#             */
/*   Updated: 2022/04/08 19:12:30 by pmontese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed() : value(0)
{
}

Fixed::Fixed(const int i)
{
	value = i * (1 << point);
}

Fixed::Fixed(const float f)
{
	value = roundf(f * (1 << point));
}

Fixed::~Fixed()
{
}

Fixed::Fixed(const Fixed &f)
{
	value = f.getRawBits();
}

void Fixed::operator = (const Fixed &f)
{
	value = f.getRawBits();
}

int Fixed::getRawBits( void ) const
{
	return value;
}

void Fixed::setRawBits( int const raw )
{
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
	float v1 = toFloat();
	float v2 = f.toFloat();
	float v = v1 * v2;
	Fixed res(v);

	return res;
}

Fixed Fixed::operator / (const Fixed &f)
{
	float v1 = toFloat();
	float v2 = f.toFloat();
	float v = v1 / v2;
	Fixed res(v);

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

Fixed Fixed::operator ++ (int)
{
	Fixed tmp = *this;
	value ++;
	return tmp;
}

Fixed Fixed::operator -- (int)
{
	Fixed tmp = *this;
	value --;
	return tmp;
}

Fixed &Fixed::min(Fixed &f1, Fixed &f2) { return (f1 < f2 ? f1 : f2); }
Fixed &Fixed::max(Fixed &f1, Fixed &f2) { return (f1 > f2 ? f1 : f2); }
const Fixed &Fixed::min(const Fixed &f1, const Fixed &f2) { return (f1 < f2 ? f1 : f2); }
const Fixed &Fixed::max(const Fixed &f1, const Fixed &f2) { return (f1 > f2 ? f1 : f2); }
