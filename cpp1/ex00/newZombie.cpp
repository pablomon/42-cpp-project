/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmontese <pmontes@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 20:55:33 by pmontese          #+#    #+#             */
/*   Updated: 2021/12/25 22:47:50 by pmontese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie *	Zombie::newZombie(std::string name)
{
	Zombie *instance;
	
	instance = new Zombie();
	instance->name = name;
	return instance;
} 