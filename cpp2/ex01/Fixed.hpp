/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmontese <pmontes@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 23:24:38 by pmontese          #+#    #+#             */
/*   Updated: 2022/01/26 11:57:32 by pmontese         ###   ########.fr       */
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
		Fixed();
		Fixed(const int integerVal);
		Fixed(const float floatingPointVal);
		~Fixed();
		Fixed(const Fixed &f);
		void operator = (const Fixed &f);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
		float toFloat(void) const;
		int toInt(void) const;
};

std::ostream	&operator<<(std::ostream &os, const Fixed &v);

#endif