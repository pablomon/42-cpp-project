/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmontese <pmontese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 11:03:07 by pmontese          #+#    #+#             */
/*   Updated: 2022/04/06 19:47:56 by pmontese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>


class Karen
{
	typedef void (Karen::*karenFuncPointer)();

	private:
		void debug( void );
		void info( void );
		void warning( void );
		void error( void );
	public:
		karenFuncPointer ptrs[4];
		std::string levels[4];
		void complain(std::string level);
		Karen();
		~Karen();
};
