#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "Intern.hpp"

int main(void) 
{
	std::cout << "Creating a newby bureaucrat\n";
	Bureaucrat b1 = Bureaucrat("Newby", 150, 150);

	std::cout << "Creating an intern" << std::endl;
	Intern intern;

	Form *f;
	f = intern.makeForm("ShrubberyTree", "home");
	std::cout << *f << std::endl;
	f->action();
	f = intern.makeForm("PresidentialPardon", "me");
	std::cout << *f << std::endl;
	f->action();
	f = intern.makeForm("RobotomyRequest", "you");
	std::cout << *f << std::endl;
	f->action();
	f = intern.makeForm("SalaryRaise", "all");
}
