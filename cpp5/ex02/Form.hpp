#if !defined(FORM_HPP)
#define FORM_HPP

# include <iostream>
# include <exception>
# include <string>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form {
	private:
	const std::string	name;
	bool				isSigned;
	const int			signGrade;
	const int			execGrade;
	const std::string	target;

	/*canonical form*/
	public:
	Form(void);
	Form(const std::string name, bool isSigned, const int signGrade, const int execGrade, const std::string target);
	virtual ~Form(void);
	Form(const Form &o);
	Form &operator=(const Form &o);

	/*exceptions*/
	class GradeTooHighException : public std::exception {
		public:
		const char *what() const throw();
	};
	class GradeTooLowException : public std::exception {
		public:
		const char *what() const throw();
	};
	class NotSignedException : public std::exception {
		public:
		const char *what() const throw();
	};

	/*member functions*/
	public:
	std::string getName(void) const;
	void beSigned(const Bureaucrat &b);
	int getSignGrade(void) const;
	int getExecGrade(void) const;
	bool getIsSigned (void) const;
	std::string getTarget(void) const;
	void execute(Bureaucrat const & executor) const;
	virtual void action() const = 0; // <- class marked as abstract
};

/*operators overload*/
std::ostream &operator<<(std::ostream &os, const Form &form);

#endif // FORM_HPP
