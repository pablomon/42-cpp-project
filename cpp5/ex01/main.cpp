#include "Form.hpp"
#include "Bureaucrat.hpp"

int main(void) 
{
	std::cout << "\n" << "Creating a newby bureaucrat\n";
	Bureaucrat *b1 = new Bureaucrat("Newby", 150, 150);

	std::cout << "\n" << "Creating a couple forms\n";
	Form	*f1 = new Form("Easy", 150, 150);
	std::cout << *f1;
	Form	*f2 = new Form("Normal", 120, 150);
	std::cout << *f2;

	std::cout << "\n" << b1->getName() << " tries to sign the forms:\n";
	try
	{
		std::cout << "Signing " << f1->getName() << "...\n";
		b1->signForm(*f1);
		std::cout << "signed\n";
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	try
	{
		std::cout << "Signing " << f2->getName() << "...\n";
		b1->signForm(*f2);
		std::cout << "signed\n";
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}

	std::cout << "\n" << "Creating a higher rank bureaucrat\n";
	Bureaucrat *b2 = new Bureaucrat("gray", 100, 100);

	std::cout << "\n" << b2->getName() << " tries to sign the form:\n";
	try
	{
		std::cout << "Signing " << f2->getName() << "...\n";
		b2->signForm(*f2);
		std::cout << "signed\n";
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}

	std::cout << "\n" << "Going home\n";
	delete b1;
	delete b2;
	delete f1;
	delete f2;
}
