/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmontese <pmontes@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 11:41:09 by pmontese          #+#    #+#             */
/*   Updated: 2021/12/27 16:31:41 by pmontese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
# define HUMANA_H
#include "Weapon.hpp"

class HumanA
{
	public:
	HumanA(std::string name, Weapon &weapon);
	void attack();

	std::string _name;
	Weapon &_weapon;
};

#endif
