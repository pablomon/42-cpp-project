/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmontese <pmontes@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 20:37:06 by pmontese          #+#    #+#             */
/*   Updated: 2021/12/25 22:16:27 by pmontese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie father = Zombie();
	Zombie *son = father.newZombie("fatherSon");
	father.randomChump("snowSon");
	son->announce();
	delete(son);

	return 0;
}
