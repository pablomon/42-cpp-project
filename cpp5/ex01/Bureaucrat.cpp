#include "Bureaucrat.hpp"

/* Canonical form */
Bureaucrat::Bureaucrat() : name("Gray"), signGrade(150)
{
	std::cout << getName() << " of grade " << getGrade() << " created\n";
}
Bureaucrat::Bureaucrat(std::string name, int signGrade, int execGrade) : name(name)
{
	if (signGrade > 150 || execGrade > 150)
		throw GradeTooLowException();
	if (signGrade < 1 || execGrade < 1)
		throw GradeTooHighException();
	this->signGrade = signGrade;
	this->execGrade = execGrade;
	std::cout << getName() << " of grade " << getGrade() << " created\n";
}
Bureaucrat::~Bureaucrat() {}
Bureaucrat::Bureaucrat(const Bureaucrat &o) : name(o.getName()), signGrade(o.getGrade()) { }
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &o) 
{
	if (this == &o)
		return *this;
	signGrade = o.getGrade();
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
int Bureaucrat::getGrade() const { return signGrade; }

/* Member functions */
void Bureaucrat::gradeUp() {
	if (signGrade == 1)
		throw GradeTooHighException();
	signGrade--;
	std::cout << getName() << " upgraded to " << getGrade() << "\n";
}

void Bureaucrat::gradeDown() {
	if (signGrade == 150)
		throw GradeTooLowException();
	signGrade++;
	std::cout << getName() << " downgraded to " << getGrade() << "\n";
}

void Bureaucrat::signForm(Form &form) {
	form.beSigned(*this);
}

/* Exceptions */
const char *Bureaucrat::GradeTooHighException::what() const throw() { return "Grade too high"; }
const char *Bureaucrat::GradeTooLowException::what() const throw() { return "Grade too low"; }
