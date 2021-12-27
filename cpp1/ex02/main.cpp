/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmontese <pmontes@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 11:06:39 by pmontese          #+#    #+#             */
/*   Updated: 2021/12/27 11:22:57 by pmontese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *ptr = &str;
	std::string &ref = str;

	// print addresses
	std::cout << "Address of variable" << std::endl;
	std::cout << &str << std::endl;
	std::cout << "Address through pointer" << std::endl;
	std::cout << ptr << std::endl;
	std::cout << "Address through reference" << std::endl;
	std::cout << &ref << std::endl;
	// print values
	std::cout << "value through pointer" << std::endl;
	std::cout << *ptr << std::endl;
	std::cout << "value through reference" << std::endl;
	std::cout << ref << std::endl;
	return 0;
}
