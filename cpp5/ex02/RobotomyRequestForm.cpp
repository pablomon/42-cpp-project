#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() {}
RobotomyRequestForm::~RobotomyRequestForm() {}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &form) {
	*this = form;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &o) {
	if (this == &o)
		return *this;
	return *this;
}
RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : Form("RobotomyRequestForm", false, 25, 5, target) {}

void RobotomyRequestForm::action() const {
	std::cout << "Tzzzzzz\n";
	usleep(50000);
	if (rand() % 2 == 0)
		std::cout << this->getTarget() << " has been robotomized!\n";
	else
		std::cout << "error robotomizing " << this->getTarget() << "\n";
}
