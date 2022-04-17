/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmontese <pmontes@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/17 22:00:29 by pmontese          #+#    #+#             */
/*   Updated: 2022/04/18 01:07:04 by pmontese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <string>
#include <iostream>
#include <stdint.h>
#include <stdio.h>

struct Data
{
	int x;
	double d;
	char c;
};

void print(Data &data)
{
	std::cout
	<< "  x = " << data.x << "\n"
	<< "  y = " << data.d << "\n"
	<< "  c = " << data.c << "\n"
	<< std::endl;
}

uintptr_t serialize(Data *ptr)
{
	std::cout << "Serializing data...\n";
	char *serialized = new char[sizeof(Data)];
	char *charptr = reinterpret_cast<char*>(ptr);
	for (size_t i = 0; i < sizeof(Data); i++)
		serialized[i] = charptr[i];
	
	uintptr_t intptr = reinterpret_cast<uintptr_t>(serialized);
	return intptr;
}

Data* deserialize(uintptr_t raw)
{
	Data* ptr = reinterpret_cast<Data*>(raw);
	return ptr;
}

int main(void)
{
	Data od = { 1,2,'c' };
	std::cout << "Original data:\n";
	print(od);
	uintptr_t raw = serialize(&od);
	std::cout << "Serialized data ptr = " << raw << std::endl;
	od.x = 42;
	od.d = 42;
	od.c = 42;
	std::cout << "Modified data:\n";
	print(od);
	Data *deserialized = deserialize(raw);
	std::cout << "Deserialized data:\n";
	print(*deserialized);
	delete deserialized;
	return 0;
}
