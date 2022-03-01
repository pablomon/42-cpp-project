/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmontese <pmontese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 11:03:07 by pmontese          #+#    #+#             */
/*   Updated: 2022/03/02 00:50:15 by pmontese         ###   ########.fr       */
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
	void invalid( void );
public:
	karenFuncPointer ptrs[5];
	std::string levels[5];
	void complain(std::string level);
	Karen();
	~Karen();
};
