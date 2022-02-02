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
	const int			grade;
	bool				isSigned;

	public:
	std::string getName(void) const;
	int getGrade(void) const;
	bool getIsSigned (void) const;
	void beSigned(const Bureaucrat &b);

	/*canonical form*/
	Form(void);
	Form(const std::string name, const int grade);
	~Form(void);
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

};

/*operators overload*/
std::ostream &operator<<(std::ostream &os, const Form &form);

#endif // FORM_HPP
