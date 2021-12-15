/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmontese <pmontes@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 19:45:30 by pmontese          #+#    #+#             */
/*   Updated: 2021/12/15 19:46:07 by pmontese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONE_BOOK_H
# define PHONE_BOOK_H

# include "contact.hpp"

# define MAX_CONTACTS 8

class PhoneBook {
	public:
	PhoneBook();
	~PhoneBook();
	void addContact(Contact *contact);
	Contact *getContact(int idx);

	private:
	int idx;
	Contact **contacts;
};

#endif