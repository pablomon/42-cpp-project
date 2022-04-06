/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmontese <pmontese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 11:41:09 by pmontese          #+#    #+#             */
/*   Updated: 2022/04/06 19:11:04 by pmontese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
# define HUMANB_H
#include "Weapon.hpp"

class HumanB
{
	public:
	HumanB (std::string name);
	void attack();
	void setWeapon(Weapon &weapon);

	private:
	std::string _name;
	Weapon *_weapon;
};

#endif
