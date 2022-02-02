#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <exception>
# include "Form.hpp"

class Form;

class Bureaucrat {
	private:
	const std::string name;
	int grade;

	public:
	const std::string getName() const;
	int getGrade() const;

	class GradeTooHighException : public std::exception {
		public:
		const char *what() const throw();
	};

	class GradeTooLowException : public std::exception {
		public:
		const char *what() const throw();
	};

	void gradeUp();
	void gradeDown();
	void signForm(Form &form);

	Bureaucrat(std::string name, int grade);
	Bureaucrat();
	~Bureaucrat();
	Bureaucrat(const Bureaucrat &bureaucrat);
	Bureaucrat &operator=(const Bureaucrat &bureaucrat);
};

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bureaucrat);

#endif