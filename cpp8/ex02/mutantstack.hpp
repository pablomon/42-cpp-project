/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmontese <pmontese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 18:00:12 by pmontese          #+#    #+#             */
/*   Updated: 2022/04/19 18:00:13 by pmontese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <algorithm>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
	MutantStack();
	virtual ~MutantStack();
	MutantStack(const MutantStack<T> &other);
	MutantStack<T> &operator=(const MutantStack<T> &other);

	// Iterators:
	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator begin();
	iterator end();
};

template <typename T>
MutantStack<T>::MutantStack() : std::stack<T>() {}

template <typename T>
MutantStack<T>::~MutantStack() {}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack<T> &other) {
	*this = other;
}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(const MutantStack<T> &other) {
	if (this == &other)
		return *this;
	std::stack<T>::operator=(other);
	return *this;
}

// Iterators :
template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin() {
	return this->c.begin();
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end() {

	return this->c.end();
}

#endif
