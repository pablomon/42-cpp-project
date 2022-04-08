/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmontese <pmontese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 10:55:58 by pmontese          #+#    #+#             */
/*   Updated: 2022/04/06 19:29:42 by pmontese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "karen.hpp"
#include <iostream>

int main(void)
{
	Karen k;
	std::cout << "DEBUG:" << std::endl;
	k.complain("debug");
	std::cout << "INFO:" << std::endl;
	k.complain("info");
	std::cout << "WARNING:" << std::endl;
	k.complain("warning");
	std::cout << "ERROR:" << std::endl;
	k.complain("error");
	std::cout << "INVALID:" << std::endl;
	k.complain("invalid option defaults to debug");
	return 0;
}
