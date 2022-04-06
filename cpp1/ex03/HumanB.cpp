/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmontese <pmontese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 11:40:38 by pmontese          #+#    #+#             */
/*   Updated: 2022/04/06 19:10:33 by pmontese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name):_name(name), _weapon(0) {}
void HumanB::setWeapon(Weapon &weapon) {
	_weapon = &weapon;
 }
void HumanB::attack()
{
	if (!_weapon)
		std::cout << _name << " attacks with his mighty fists" << std::endl;
	else
		std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
}
