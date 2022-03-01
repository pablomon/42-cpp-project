/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmontese <pmontese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 20:00:01 by pmontese          #+#    #+#             */
/*   Updated: 2022/03/02 00:01:55 by pmontese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H
# include <string>
# include <iostream>

class Zombie
{
	public:
	std::string name;

	Zombie();
	~Zombie();
	void announce(void);
	Zombie *zombieHorde(int n, std::string name);
};

#endif
