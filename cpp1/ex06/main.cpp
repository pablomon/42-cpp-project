/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmontese <pmontese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 10:55:58 by pmontese          #+#    #+#             */
/*   Updated: 2022/03/02 00:53:09 by pmontese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "karen.hpp"
#include <iostream>
#include <string>

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Please input a log level" << std::endl;
		return 0;
	}

	Karen *k = new Karen();

	int ilvl = 4;
	for (int i = 0; i < 4; i++)
	{
		std::string in = argv[1];
		if (k->levels[i] == in)
			ilvl = i;
	}

	switch (ilvl)
	{
		case 0:
			k->complain("DEBUG");
			k->complain("INFO");
			k->complain("WARNING");
			k->complain("ERROR");
		break;
		case 1:
			k->complain("INFO");
			k->complain("WARNING");
			k->complain("ERROR");
		break;
		case 2:
			k->complain("WARNING");
			k->complain("ERROR");
		break;
		case 3:
			k->complain("ERROR");
		break;

	default:
			k->complain("INVALID");
		break;
	}

	delete k;
	return 0;
}
