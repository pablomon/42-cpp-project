/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmontese <pmontes@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 16:51:36 by pmontese          #+#    #+#             */
/*   Updated: 2021/12/15 19:45:14 by pmontese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <iomanip>	// needed to use manipulators with parameters (precision, width)
#include <ios>		// for discarding cin buffer
#include <limits>	// for discarding cin buffer
#include "phoneBook.hpp"
#include "contact.hpp"

#define MAX_CONTACTS 8
#define WIDTH 10
#define ADD "ADD"
#define SEARCH "SEARCH"
#define EXIT "EXIT"


std::string truncateString(std::string s)
{
	if (s.length() > WIDTH)
	{
		std::string ns = s.substr(0, 9);
		ns.append(".");
		return (ns);
	}
	return (s);
}

void search(PhoneBook *phoneBook)
{
	Contact	*contact;
	int		n = 0;
	int 	input;

	std::cout << "Current phonebook entries:" << std::endl;
	for (size_t i = 1; i <= MAX_CONTACTS; i++)
	{
		contact = phoneBook->getContact(i - 1);
		if (contact)
		{
			std::cout << std::right << std::setw(WIDTH) << i << "|";
			std::cout << std::right << std::setw(WIDTH) << truncateString(contact->firstName) << "|";
			std::cout << std::right << std::setw(WIDTH) << truncateString(contact->lastName) << "|";
			std::cout << std::right << std::setw(WIDTH) << truncateString(contact->nickName) << "|" << std::endl;
			n++;
		}
	}
	if (n == 0)
		std::cout << "You have no contacts yet\n";
	else
	{
		std::cout << "Input contact number to know more:\n";
		if (!(std::cin >> input)) 
		{
			std::cout << "Invalid: Not an integer" << std::endl;
			std::cin.clear();
		}
		else if (input > 0 && input <= n)
			phoneBook->getContact(input - 1)->Print();
		else
			std::cout << "Invalid: No entry" << std::endl;
	}
}

void add(PhoneBook *phoneBook)
{
	Contact *contact;

	std::cin.clear();
	contact = new Contact();
	std::cout << "Adding a new contact" << std::endl;
	std::cout << "First name? " << std::endl;
	std::cin >> contact->firstName;
	std::cout << "Last name? " << std::endl;
	std::cin >> contact->lastName;
	std::cout << "Nickname? " << std::endl;
	std::cin >> contact->nickName;
	std::cout << "Phone number? " << std::endl;
	std::cin >> contact->phoneNum;
	std::cout << "Darkest secret? " << std::endl;
	std::cin >> contact->secret;
	phoneBook->addContact(contact);
}

int main(void)
{
	PhoneBook phoneBook;

	std::cout << "Welcome to your phonebook." << std::endl;
	while (1)
	{
		std::cout << "\nType ADD, SEARCH or EXIT" << std::endl;
		std::string userInput;
		std::cin >> userInput;
		if (userInput == ADD)
			add(&phoneBook);
		else if (userInput == SEARCH)
			search(&phoneBook);
		else if (userInput == EXIT)
			break;
		else
			continue;
	}
	return 0;
}