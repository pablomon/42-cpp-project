#include "Bureaucrat.hpp"

int main(void) 
{
	std::cout << "Creating a default bureaucrat\n";
	Bureaucrat *b1 = new Bureaucrat();
	std::cout << "Current bureaucrat grade " << b1->getGrade() << " \n";
	std::cout << "Trying to decrease grade\n";
	for (size_t i = 0; i < 3; i++)
	{
		try {
			b1->gradeDown();
		}
		catch(const std::exception& e)	{
			std::cout << e.what() << '\n';
		}
	}
	
	std::cout << "Current bureaucrat grade " << b1->getGrade() << " \n";
	b1->gradeUp();
	b1->gradeUp();
	std::cout << "Current bureaucrat grade " << b1->getGrade() << " \n";
	delete b1;

	std::cout << "\nCreating a top notch bureaucrat\n";
	try
	{
		b1 = new Bureaucrat(2);
		std::cout << "Current bureaucrat grade " << b1->getGrade() << " \n";
		for (size_t i = 0; i < 3; i++)
		{
			try {
				b1->gradeUp();
			}
			catch(const std::exception& e)	{
				std::cout << e.what() << '\n';
			}
		}
		std::cout << "Current bureaucrat grade " << b1->getGrade() << " \n";
		delete b1;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	
	std::cout << "\nCreating a wrong bureaucrat\n";
	try
	{
		b1 = new Bureaucrat(160);
		delete b1;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	
	return 0;
}
