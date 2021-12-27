/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmontese <pmontes@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 11:40:38 by pmontese          #+#    #+#             */
/*   Updated: 2021/12/27 12:03:32 by pmontese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(Weapon weapon)
{
	this->weapon = weapon;
}
void HumanA::Attack()
{
	std::cout << name << " attacks with his " << weapon.getType() << std::endl;
}
