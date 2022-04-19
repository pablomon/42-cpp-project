/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmontese <pmontese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 13:46:07 by pmontese          #+#    #+#             */
/*   Updated: 2022/04/19 13:46:23 by pmontese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#define LOG(x) std::cout << x << std::endl

#include "easyfind.hpp"

int main()
{
	std::vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(3);

	LOG("vector initialized with :");
	for (std::vector<int>::iterator it = v.begin(); it < v.end(); it++)
		std::cout << *it << ", ";

	LOG("\nFinding value 2:");
	std::vector<int>::iterator it = easyfind(v, 2);
	LOG(*it);

	try
	{
		LOG("Finding value 123:");
		std::vector<int>::iterator it = easyfind(v, 123);
		LOG(*it);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}


	LOG("\nInitializing list:");
	std::list<int> l;
	l.push_back(10);
	l.push_back(20);
	l.push_back(30);

	LOG("Finding value 10:");
	std::list<int>::iterator it2 = easyfind(l, 10);
	LOG(*it2);

	try
	{
		LOG("Finding value 123:");
		std::vector<int>::iterator it = easyfind(v, 123);
		LOG(*it);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}
