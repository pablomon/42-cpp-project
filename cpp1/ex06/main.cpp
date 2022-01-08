/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmontese <pmontes@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 10:55:58 by pmontese          #+#    #+#             */
/*   Updated: 2022/01/08 17:11:40 by pmontese         ###   ########.fr       */
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

	int ilvl = 0;
	for (int i = 0; i < 4; i++)
	{
		std::string in = argv[1];
		if (k->levels[i] == in)
			ilvl = i;
	}

	switch (ilvl)
	{
		case 0:
			k->complain("debug");
			k->complain("info");
			k->complain("warning");
			k->complain("error");
		break;
		case 1:
			k->complain("info");
			k->complain("warning");
			k->complain("error");
		break;
		case 2:
			k->complain("warning");
			k->complain("error");
		break;
		case 3:
			k->complain("error");
		break;
	
	default:
		break;
	}

	delete k;
	return 0;
}
