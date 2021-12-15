/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmontese <pmontes@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 19:45:41 by pmontese          #+#    #+#             */
/*   Updated: 2021/12/15 19:45:41 by pmontese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include "string"
# include <string>
# include <iostream>

class Contact
{
public:
	std::string firstName;
	std::string lastName;
	std::string nickName;
	std::string phoneNum;
	std::string secret;

	Contact() { }
	~Contact() { }

	void Print(void);
};

#endif