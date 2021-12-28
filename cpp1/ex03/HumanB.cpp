/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmontese <pmontes@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 11:40:38 by pmontese          #+#    #+#             */
/*   Updated: 2021/12/27 16:57:16 by pmontese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name):_name(name) {}
void HumanB::setWeapon(Weapon &weapon) {
	_weapon = &weapon;
 }
void HumanB::attack()
{
	std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
}
