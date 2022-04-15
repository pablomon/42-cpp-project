#if !defined(INTERN_HPP)
#define INTERN_HPP

# include <iostream>
# include <sstream>
# include <string>
# include "form.h"
# include "ShrubberyCreationForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"

class Form;

class Intern{
	public:
	Intern();
	~Intern();
	Intern(const Intern &o);
	Intern &operator=(const Intern &o);

	Form *makeForm(std::string const name, std::string target);
};

#endif