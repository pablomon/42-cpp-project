/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmontese <pmontese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 19:45:54 by pmontese          #+#    #+#             */
/*   Updated: 2022/03/01 17:51:31 by pmontese         ###   ########.fr       */
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
