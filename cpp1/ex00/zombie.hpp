/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmontese <pmontes@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 20:00:01 by pmontese          #+#    #+#             */
/*   Updated: 2021/12/25 22:47:49 by pmontese         ###   ########.fr       */
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
	Zombie *newZombie(std::string name);
	void randomChump(std::string name);
};

#endif