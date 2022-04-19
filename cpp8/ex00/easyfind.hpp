/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmontese <pmontese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 13:46:32 by pmontese          #+#    #+#             */
/*   Updated: 2022/04/19 13:46:37 by pmontese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <exception>

class NotFoundExeception : public std::exception
{
	virtual const char* what() const throw () { return "Not found exception" ; }
};

template<typename T>
typename T::iterator easyfind(T &container, const int& n)
{
	typename T::iterator it = std::find(container.begin(), container.end(), n);
	if ( it != container.end() )
		return it;
	else
		throw NotFoundExeception();
}

#endif
