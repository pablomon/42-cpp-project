/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmontese <pmontes@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 11:41:09 by pmontese          #+#    #+#             */
/*   Updated: 2021/12/27 16:57:11 by pmontese         ###   ########.fr       */
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
