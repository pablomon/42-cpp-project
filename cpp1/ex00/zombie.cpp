/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmontese <pmontese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 20:03:48 by pmontese          #+#    #+#             */
/*   Updated: 2022/03/01 23:48:56 by pmontese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()
{
	std::cout << "Zombie created\n";
}

Zombie::~Zombie()
{
	std::cout << name << " Zombie destroyed\n";
}

void Zombie::announce(void)
{
	std::cout << name << " Braiiiinzzzzz\n";
}
