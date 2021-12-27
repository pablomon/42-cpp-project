/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmontese <pmontes@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 20:37:06 by pmontese          #+#    #+#             */
/*   Updated: 2021/12/27 11:57:09 by pmontese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#include "Zombie.hpp"

int main(void)
{
	size_t n = 15;

	Zombie z1 = Zombie();
	Zombie *pz = z1.zombieHorde(n, "zom");
	for (size_t i = 0; i < n; i++)
	{
		pz[i].announce();
	}
	
	delete[] pz;

	return 0;
}
