/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmontese <pmontes@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 23:24:38 by pmontese          #+#    #+#             */
/*   Updated: 2022/01/08 23:45:35 by pmontese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class Fixed
{
	private:
		int value;
		static const int point;
	public:
		Fixed();
		~Fixed();
		Fixed(const Fixed &f);
		void operator = (const Fixed &f);
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};