/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmontese <pmontese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 20:37:06 by pmontese          #+#    #+#             */
/*   Updated: 2022/04/06 18:21:11 by pmontese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#include "Zombie.hpp"

int main(void)
{
	size_t n = 15;

	Zombie z1 = Zombie();
	Zombie *pz = zombieHorde(n, "zom");
	for (size_t i = 0; i < n; i++)
		pz[i].announce();

	delete[] pz;

	return 0;
}
