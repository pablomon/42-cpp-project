/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmontese <pmontes@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 11:40:38 by pmontese          #+#    #+#             */
/*   Updated: 2021/12/27 16:28:57 by pmontese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon &weapon)	: _name(name), _weapon(weapon) {}

void HumanA::attack()
{
	std::cout << _name << " attacks with his " << _weapon.getType() << std::endl;
}
