#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include <cstdlib>
# include <unistd.h>
# include "Form.hpp"

class RobotomyRequestForm : public Form {
	public:
	RobotomyRequestForm();
	RobotomyRequestForm(const std::string &target);
	virtual ~RobotomyRequestForm();
	RobotomyRequestForm(const RobotomyRequestForm &form);
	RobotomyRequestForm &operator=(const RobotomyRequestForm &form);
	static Form *getCopy(std::string target);

	private:
	void action() const;
};

#endif
