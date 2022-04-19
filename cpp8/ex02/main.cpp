/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmontese <pmontese@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 18:00:17 by pmontese          #+#    #+#             */
/*   Updated: 2022/04/19 18:00:19 by pmontese         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <list>

#include "mutantstack.hpp"

int main(void)
{
	{
		std::cout << "Inherited copy constructor test" << std::endl;
		MutantStack <int> mstack;
		mstack.push(1);
		mstack.push(2);
		std::cout << "Mutant stack 1:" << std::endl;
		for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); it++)
			std::cout << *it << std::endl;

		std::cout << "Copy mstack1 -> mstack2" << std::endl;
		MutantStack <int> mstack2(mstack);
		mstack.pop();
		std::cout << "Modified mutant stack 1:" << std::endl;
		for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); it++)
			std::cout << *it << std::endl;
		std::cout << "Mutant stack 2:" << std::endl;
		for (MutantStack<int>::iterator it = mstack2.begin(); it != mstack2.end(); it++)
			std::cout << *it << std::endl;
		std::cout << std::endl;
	}

	{
		std::cout << "Subject tests as a list:" << std::endl;

		std::cout << "Push back:" << std::endl;
		std::list <int> alist;
		alist.push_back(5);
		alist.push_back(17);

		std::cout << "Iterator end:" << std::endl;
		std::list<int>::iterator topit = alist.end();
		topit--;
		std::cout << *topit << std::endl;

		std::cout << "Pop" << std::endl;
		alist.pop_back();

		std::cout << "Size:" << std::endl;
		std::cout << alist.size() << std::endl;

		std::cout << "Iterator begin:" << std::endl;
		alist.push_back(3);
		alist.push_back(5);
		alist.push_back(737);
		alist.push_back(0);

		std::list<int>::iterator it = alist.begin();
		std::list<int>::iterator ite = alist.end();

		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
	}

	{
		std::cout << "\nSubject tests as a Mutanstack:" << std::endl;

		std::cout << "Push back:" << std::endl;
		MutantStack <int> mstack;
		mstack.push(5);
		mstack.push(17);

		std::cout << "Iterator end:" << std::endl;
		std::cout << mstack.top() << std::endl;

		std::cout << "Pop" << std::endl;
		mstack.pop();

		std::cout << "Size:" << std::endl;
		std::cout << mstack.size() << std::endl;

		std::cout << "Iterator begin:" << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);

		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();

		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}

		std::stack<int> s(mstack);
	}

	{
		std::cout << "\nSubject tests as a Mutanstack of strings:" << std::endl;

		std::cout << "Push back:" << std::endl;
		MutantStack <std::string> mstack;
		mstack.push("5");
		mstack.push("17");

		std::cout << "Iterator end:" << std::endl;
		std::cout << mstack.top() << std::endl;

		std::cout << "Pop" << std::endl;
		mstack.pop();

		std::cout << "Size:" << std::endl;
		std::cout << mstack.size() << std::endl;

		std::cout << "Iterator begin:" << std::endl;
		mstack.push("3");
		mstack.push("5");
		mstack.push("737");
		mstack.push("0");

		MutantStack<std::string>::iterator it = mstack.begin();
		MutantStack<std::string>::iterator ite = mstack.end();

		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}

		std::stack<std::string> s(mstack);
	}

	return 0;
}
