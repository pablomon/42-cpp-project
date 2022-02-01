#include "Bureaucrat.hpp"

/* Canonical form */
Bureaucrat::Bureaucrat() : name("Gray"), grade(150)
{
	std::cout << getName() << " of grade " << getGrade() << " created\n";
}
Bureaucrat::Bureaucrat(int grade) : name("Gray")
{
	if (grade > 150)
		throw GradeTooLowException();
	if (grade < 1)
		throw GradeTooHighException();
	this->grade = grade;
	std::cout << getName() << " of grade " << getGrade() << " created\n";
}
Bureaucrat::~Bureaucrat() {}
Bureaucrat::Bureaucrat(const Bureaucrat &o) : name(o.getName()), grade(o.getGrade()) { }
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &o) 
{
	if (this == &o)
		return *this;
	grade = o.getGrade();
	return *this;
}

/* Operators overload */
std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat) 
{
	std::cout << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	return os;
}

/* Getters */
const std::string Bureaucrat::getName() const { return name; }
int Bureaucrat::getGrade() const { return grade; }

/* Member functions */
void Bureaucrat::gradeUp() {
	if (grade == 1)
		throw GradeTooHighException();
	grade--;
	std::cout << getName() << " upgraded to " << getGrade() << "\n";
}

void Bureaucrat::gradeDown() {
	if (grade == 150)
		throw GradeTooLowException();
	grade++;
	std::cout << getName() << " downgraded to " << getGrade() << "\n";
}

/* Exceptions */
const char *Bureaucrat::GradeTooHighException::what() const throw() { return "Grade too high"; }
const char *Bureaucrat::GradeTooLowException::what() const throw() { return "Grade too low"; }
