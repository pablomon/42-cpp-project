/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmontese <pmontese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 11:00:40 by pmontese          #+#    #+#             */
/*   Updated: 2022/03/02 00:53:35 by pmontese         ###   ########.fr       */
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
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-trip\
	le-pickle-special-ketchup burger. I just love it" << std::endl;
}
void Karen::info( void )
{
	std::cout << "I cannot believe adding extrabacon cost more money.\
	You don’t put enough! If you did I would not have to ask for it" << std::endl;
}
void Karen::warning( void )
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been\
	coming here for years and you just started working here last month." << std::endl;
}
void Karen::error( void )
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void Karen::invalid( void )
{
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

void Karen::complain(std::string level)
{
	if (levels[4] == level)
	{
		karenFuncPointer ptr = ptrs[4];
		(this->*ptr)();
		return;
	}
	int l = 0;
	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
			l = i;
	}

	std::string upper = level;
	for (size_t j = 0; j < level.length(); j++)
	{
			char c = upper[j];
			if (c > 96 && c < 123)
					upper[j] -= 32;
	}
	std::cout << "[" << upper << "]" << std::endl;
	karenFuncPointer ptr = ptrs[l];
	(this->*ptr)();
}
