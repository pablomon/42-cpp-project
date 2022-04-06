/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmontese <pmontese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/27 11:06:39 by pmontese          #+#    #+#             */
/*   Updated: 2022/04/06 18:58:49 by pmontese         ###   ########.fr       */
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
