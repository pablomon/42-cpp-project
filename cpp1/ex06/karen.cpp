/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmontese <pmontese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 11:00:40 by pmontese          #+#    #+#             */
/*   Updated: 2022/04/06 20:10:48 by pmontese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "karen.hpp"
#include <iostream>

Karen::Karen()
{
	levels[0] = "DEBUG";
	levels[1] = "INFO";
	levels[2] = "WARNING";
	levels[3] = "ERROR";
	levels[4] = "INVALID";

	ptrs[0] = &Karen::debug;
	ptrs[1] = &Karen::info;
	ptrs[2] = &Karen::warning;
	ptrs[3] = &Karen::error;
	ptrs[4] = &Karen::invalid;
}

Karen::~Karen() { }

void Karen::debug( void )
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-trip\
	le-pickle-special-ketchup burger. I just love it\n" << std::endl;
}
void Karen::info( void )
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extrabacon cost more money.\
	You don’t put enough! If you did I would not have to ask for it\n" << std::endl;
}
void Karen::warning( void )
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been\
	coming here for years and you just started working here last month.\n" << std::endl;
}
void Karen::error( void )
{
	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now.\n" << std::endl;
}

void Karen::invalid( void )
{
	std::cout << "[ Probably complaining about insignificant problems ]\n" << std::endl;
}

void Karen::complain(std::string level)
{
	int ilvl = 0;
	while (ilvl < 4)
	{
		if (level == levels[ilvl])
			break;
		ilvl++;
	}

	switch (ilvl)
	{
		case 0:
			(this->*ptrs[0])();
		case 1:
			(this->*ptrs[1])();
		case 2:
			(this->*ptrs[2])();
		case 3:
			(this->*ptrs[3])();
		break;
		case 4:
			(this->*ptrs[4])();
	default:
		break;
	}
}
