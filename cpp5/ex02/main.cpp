#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void) 
{
	srand (time(NULL));
	
	std::cout << "\n" << "Creating a newby bureaucrat\n";
	Bureaucrat b1 = Bureaucrat("Newby", 140, 140);
	std::cout << b1;

// Shrubbery form
	std::cout << "\nShrubbery form";
	std::cout << "\n" << "Creating a Shrubbery form\n";
	ShrubberyCreationForm f1 = ShrubberyCreationForm("Parking lot");
	std::cout << f1;

	std::cout << "\n" << "Newby tries to execute the form:\n";
	try
	{
		f1.execute(b1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << "\n" << "Newby tries to sign the form:\n";
	try
	{
		b1.signForm(f1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	std::cout << "\n" << "Newby calls a more seasoned bureaucrat:\n";
	Bureaucrat b2 = Bureaucrat("Major", 3, 3);
	std::cout << b2;

	std::cout << "\n" << b2.getName() << " tries to execute the form:\n";
	try
	{
		f1.execute(b2);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << f1;
	//check constructor copy
	std::cout << "Copying forms" << std::endl;
	ShrubberyCreationForm f1copy(f1);
	std::cout << f1copy;
	//check assignment op
	ShrubberyCreationForm f1assign;
	f1assign = f1;
	std::cout << f1assign;

// Presidential pardon
	std::cout << "\nPresidential pardon";
	std::cout << "\n" << "Creating a presidential pardon form\n";
	Form *f2 = new PresidentialPardonForm("Corrupt constructor");
	std::cout << *f2;

	std::cout << "\n" << b2.getName() << " tries to sign & execute the pardon:\n";
	try
	{
		std::cout << "Signing " << f2->getName() << "...\n";
		b2.signForm(*f2);
		std::cout << "Executing " << f2->getName() << "...\n";
		f2->execute(b2);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}

// Robotomy form
	std::cout << "\nRobotomy form";
	std::cout << "\n" << "Creating a robotomy form\n";
	Form *f3 = new RobotomyRequestForm("State enemy");
	std::cout << *f3;
	try
	{
		std::cout << "Signing " << f3->getName() << "...\n";
		b2.signForm(*f3);
		std::cout << "Executing " << f3->getName() << "...\n";
		f3->execute(b2);
		f3->execute(b2);
		f3->execute(b2);
		f3->execute(b2);
		f3->execute(b2);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	delete f3;

	std::cout << "\n" << "Going home\n";
	delete f2;
}
