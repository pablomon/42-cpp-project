#if !defined(INTERN_HPP)
#define INTERN_HPP

# include <iostream>
# include <exception>
# include <string>
# include <form.h>

class Form;

class Intern{
	private:

	public:
	Form *makeForm(std::string const name, std::string target)
	{
		std::cout << "Intern creates << form" << std::endl;
		
	}
};

#endif