#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include "Form.hpp"

class PresidentialPardonForm : public Form {
	public:

	PresidentialPardonForm();
	PresidentialPardonForm(const std::string &target);
	virtual ~PresidentialPardonForm();
	PresidentialPardonForm(const PresidentialPardonForm &presidentialPardonForm);
	PresidentialPardonForm &operator=(const PresidentialPardonForm &presidentialPardonForm);

	private:
	void action() const;
};

#endif
