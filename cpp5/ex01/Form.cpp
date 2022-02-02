#include "Form.hpp"

/* member functions */
std::string Form::getName() const { return name; }
bool Form::getIsSigned() const { return isSigned; }
int Form::getGrade() const { return grade; }
void Form::beSigned(const Bureaucrat &bureaucrat) {
	if (bureaucrat.getGrade() <= grade)
		isSigned = true;
	else
		throw GradeTooLowException();
}

/* exceptions */
const char *Form::GradeTooHighException::what() const throw() { return "Grade too high"; }
const char *Form::GradeTooLowException::what() const throw() { return "Grade too low"; }

/* canonical form */
Form::Form() : name("default"), grade(150), isSigned(false) {}
Form::Form(const std::string name, const int grade) : name(name), grade(grade) {
	if (grade > 150)
		throw GradeTooLowException();
	if (grade < 1)
		throw GradeTooHighException();
}
Form::~Form() {}
Form::Form(const Form &o) : 
	name(o.getName()), 
	grade(o.getGrade()),
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
	std::cout << form.getName() << " form of grade " << form.getGrade();
	if (form.getIsSigned())
		std::cout << " IS signed";
	else
		std::cout << " is NOT signed";
	std::cout << std::endl;
	return os;
}