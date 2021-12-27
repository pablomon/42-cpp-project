/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmontese <pmontes@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 11:35:54 by pmontese          #+#    #+#             */
/*   Updated: 2021/12/27 12:05:05 by pmontese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"
#include <iostream>

int main()
{
	Weapon w1 = Weapon();
	w1.setType("club");
	Weapon w2 = Weapon();
	w2.setType("hammer");

	HumanA ha = HumanA(w1);
	ha.name = "Subject a";
	ha.Attack();

	HumanB hb = HumanB();
	hb.name = "Subject b";
	hb.Attack();
	hb.weapon = w2;
	hb.Attack();
	ha.weapon = w2;
	hb.weapon = w1;
	ha.Attack();
	hb.Attack();

	return 0;
}
