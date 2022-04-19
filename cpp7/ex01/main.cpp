/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmontese <pmontes@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 10:43:12 by pmontese          #+#    #+#             */
/*   Updated: 2022/04/19 10:43:55 by pmontese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

int main( void ) {
	std::cout << "\nintegers:\n";
	int intarr[] = { 100, 200, 300, -123};

	iter(intarr, 4, doublePrint);
	std::cout << "\nstrings:\n";
	std::string strarr[] = {
		"Hola!", "Hello!", "Hej!", "Hallo!", "Kamusta!"
	};

	iter(strarr, 5, doublePrint);
	return 0;
}