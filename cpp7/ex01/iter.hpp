/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmontese <pmontes@student.42madrid.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 10:43:09 by pmontese          #+#    #+#             */
/*   Updated: 2022/04/19 10:43:10 by pmontese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template <typename T>
void iter(T *arr, size_t len, void ( *func )( T const &item ))
{
	for (size_t i = 0; i < len; i++)
		(*func)(arr[i]);
};

template <typename T>
void doublePrint(T  &item)
{
	std::cout << "Input " << item << std::endl;
	std::cout << "Doubled " << item + item << std::endl;
}

#endif