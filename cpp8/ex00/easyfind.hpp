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