/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmontese <pmontes@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 19:45:54 by pmontese          #+#    #+#             */
/*   Updated: 2021/12/15 19:45:55 by pmontese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phoneBook.hpp"


PhoneBook::PhoneBook()
{
	idx = 0;
	for (size_t i = 0; i < MAX_CONTACTS; i++)
		contacts[i] = NULL;
}

PhoneBook::~PhoneBook() { 
	for (size_t i = 0; i < MAX_CONTACTS; i++)
	{
		if (contacts[i] != NULL)
			delete contacts[i];
	}
}

void PhoneBook::addContact(Contact *contact)
{
	if (contacts[idx] != NULL)
		delete contacts[idx];
	contacts[idx] = contact;
	idx++;
	idx = idx == MAX_CONTACTS ? 0 : idx;
	std::cout << "Contact added\n";
}

Contact *PhoneBook::getContact(int idx)
{
	return contacts[idx];
}