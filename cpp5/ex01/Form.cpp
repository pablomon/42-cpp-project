#include "Form.hpp"

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

/* exceptions */
const char *Form::GradeTooHighException::what() const throw() { return "Grade too high"; }
const char *Form::GradeTooLowException::what() const throw() { return "Grade too low"; }

/* canonical form */
Form::Form() : name("default"), signGrade(150), execGrade(150), isSigned(false) {}
Form::Form(const std::string name, const int signGrade, const int execGrade) : 
	name(name), signGrade(signGrade), execGrade(execGrade) {
	if (signGrade > 150 || execGrade > 150)
		throw GradeTooLowException();
	if (signGrade < 1 ||execGrade < 1)
		throw GradeTooHighException();
}
Form::~Form() {}
Form::Form(const Form &o) : 
	name(o.getName()),
	signGrade(o.getSignGrade()),
	execGrade(o.getExecGrade()),
	isSigned(o.getIsSigned())
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