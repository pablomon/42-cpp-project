#include "Form.hpp"

/* canonical form */
Form::Form() : name("default"), isSigned(false), signGrade(150), execGrade(150), target("No target") {}
Form::Form(const std::string name, const bool isSigned, const int signGrade, const int execGrade, const std::string target) : 
	name(name), isSigned(isSigned), signGrade(signGrade), execGrade(execGrade), target(target) {
	if (signGrade > 150 || execGrade > 150)
		throw GradeTooLowException();
	if (signGrade < 1 || execGrade < 1)
		throw GradeTooHighException();
}
Form::~Form() {}
Form::Form(const Form &o) : 
	name(o.getName()),
	isSigned(o.getIsSigned()),
	signGrade(o.getSignGrade()),
	execGrade(o.getExecGrade()),
	target(o.getTarget())
{ }
Form &Form::operator=(const Form &o) {
	if (this == &o)
		return *this;
	isSigned = o.getIsSigned();
	return *this;
}

/* opeartors */
std::ostream &operator<<(std::ostream &os, const Form &form) {
	std::cout << form.getName() << " form of grade " << form.getSignGrade();
	if (form.getIsSigned())
		std::cout << " IS signed";
	else
		std::cout << " is NOT signed";
	std::cout << std::endl;
	return os;
}

/* exceptions */
const char *Form::GradeTooHighException::what() const throw() { return "Grade too high"; }
const char *Form::GradeTooLowException::what() const throw() { return "Grade too low"; }
const char *Form::NotSignedException::what() const throw() { return "Form not signed"; }

/* member functions */
std::string Form::getName() const { return name; }
bool Form::getIsSigned() const { return isSigned; }
int Form::getSignGrade() const { return signGrade; }
int Form::getExecGrade() const { return execGrade; }
void Form::beSigned(const Bureaucrat &bureaucrat) {
	if (bureaucrat.getGrade() <= signGrade)
		isSigned = true;
	else
		throw GradeTooLowException();
}
std::string Form::getTarget(void) const { return target; }
void Form::execute(Bureaucrat const & executor) const
{
	if (!getIsSigned())
		throw NotSignedException();
	if (executor.getGrade() >= execGrade)
		throw GradeTooLowException();
	action();
}