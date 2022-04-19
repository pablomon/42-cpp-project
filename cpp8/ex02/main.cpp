#include <iostream>
#include <list>

#include "mutantstack.hpp"

int main(void)
{
	{
		std::cout << "Tests as a list:" << std::endl;

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
		std::cout << "\nTests as a Mutanstack:" << std::endl;

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
		std::cout << "\nTests as a Mutanstack of strings:" << std::endl;

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
