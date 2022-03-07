#include <iostream>
#include <list>

#include "mutantstack.hpp"

int main(void)
{
	{
		std::cout << "Tests as a list:" << std::endl;

		std::list <int> alist;
		alist.push_back(5);
		alist.push_back(17);

		std::list<int>::iterator topit = alist.end();
		topit--;
		std::cout << *topit << std::endl;

		alist.pop_back();

		std::cout << alist.size() << std::endl;

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

		MutantStack <int> mstack;
		mstack.push(5);
		mstack.push(17);

		std::cout << mstack.top() << std::endl;

		mstack.pop();

		std::cout << mstack.size() << std::endl;

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
	
	return 0;
}