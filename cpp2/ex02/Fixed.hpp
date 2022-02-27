/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmontese <pmontes@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 23:24:38 by pmontese          #+#    #+#             */
/*   Updated: 2022/01/26 20:15:23 by pmontese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
	private:
		int value;
		static const int point = 8;
	public:
		// canonical form
		Fixed();
		Fixed(const Fixed &f);
		~Fixed();
		void operator = (const Fixed &f);

		// constructors
		Fixed(const int integerVal);
		Fixed(const float floatingPointVal);

		// overloaded comparison operators
		bool operator>(const Fixed &f) const;
		bool operator<(const Fixed &f) const;
		bool operator>=(const Fixed &f);
		bool operator<=(const Fixed &f);
		bool operator==(const Fixed &f);
		bool operator!=(const Fixed &f);

		// overloaded arithmetic operators
		Fixed operator+(const Fixed &f);
		Fixed operator-(const Fixed &f);
		Fixed operator*(const Fixed &f);
		Fixed operator/(const Fixed &f);

		// increment and decrement
		Fixed	&operator++();
		Fixed	operator++(int n);
		Fixed	&operator--();
		Fixed	operator--(int n);
		
		// min max
		static Fixed	&min(Fixed &f1, Fixed &f2);
		static Fixed	&max(Fixed &f1, Fixed &f2);
		const static Fixed	&min(const Fixed &f1, const Fixed &f2);
		const static Fixed	&max(const Fixed &f1, const Fixed &f2);

		// member functions
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat(void) const;
		int toInt(void) const;
};

std::ostream	&operator<<(std::ostream &os, const Fixed &v);

#endif