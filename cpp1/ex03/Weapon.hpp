/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmontese <pmontes@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 11:28:48 by pmontese          #+#    #+#             */
/*   Updated: 2021/12/27 12:12:41 by pmontese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H
#include <string>

class Weapon
{
	public:
	Weapon(std::string type);
	const std::string& getType();
	void setType(std::string str);

	private:
	std::string _type;
};

#endif