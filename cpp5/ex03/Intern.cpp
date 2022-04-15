#include "Intern.hpp"

int toint(std::string str)
{
	std::string::iterator it = str.begin();
	while (it != str.end())
	{
		std::cout << *it << std::endl;
		it++;
	}
	return 0;
}

Intern::Intern() {}
Intern::~Intern() {}
Intern::Intern(const Intern &o) { (void)o; }

Form *Intern::makeForm(std::string const name, std::string target)
{
	std::string forms[3] = {"PresidentialPardon", "ShrubberyTree", "RobotomyRequest"};

	Form* (*funcs[3])(std::string);
	funcs[0] = PresidentialPardonForm::getCopy;
	funcs[1] = ShrubberyCreationForm::getCopy;
	funcs[2] = RobotomyRequestForm::getCopy;

	int formIndex = -1;
	for (int i = 0; i < 3; i++)
	{
		if (name == forms[i])
			formIndex = i;
	}
	
	if (formIndex == -1)
	{
		std::cout << "Form template not found" << std::endl;
		return NULL;
	}
	Form *f = funcs[formIndex](target);
	std::cout << "Intern creates " << *f << std::endl;
	return f;
}