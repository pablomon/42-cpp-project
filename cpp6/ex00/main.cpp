/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmontese <pmontes@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 22:00:40 by pmontese          #+#    #+#             */
/*   Updated: 2022/04/17 22:00:41 by pmontese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string>
#include <iostream>
#include <sstream>
#include "converter.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Wrong args\n";
		return 1;
	}
	std::string str(argv[1]);
	Converter converter(str);
	return 0;
}
