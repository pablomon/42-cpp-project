/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmontese <pmontes@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 19:45:38 by pmontese          #+#    #+#             */
/*   Updated: 2021/12/15 19:45:38 by pmontese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

void Contact::Print(void)
{
	std::cout << "first name:\t" << this->firstName << std::endl;
	std::cout << "last name:\t" << this->lastName << std::endl;
	std::cout << "nick name:\t" << this->nickName << std::endl;
	std::cout << "phone number:\t" << this->phoneNum << std::endl;
	std::cout << "secret:\t\t" << this->secret << std::endl;
}