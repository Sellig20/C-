#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("MecanikCertificate", 72, 45), target("RandomTarget")
{
	std::cout << "------Default ROBOTOMY Constructor called---------" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("MecanikCertificate", 72, 45), target(target)
{
	std::cout << "------Target ROBOTOMY Constructor called----------" << std::endl;

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src)
{
	std::cout << "------Default Copied ROBOTOMY Constructor called---" << std::endl;
	(*this = src);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "------Default ROBOTOMY Destructor called------" << std::endl;

}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm & src)
{
	isSigned = src.isSigned;
	target = src.target;
    return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (!isSigned)
		throw (Form::IsNotSignedException());
	if (executor.getGrade() > executeGrade)
		throw (Form::GradeTooLowException());
	std::cout << target << " zzzzzzzzzZZZZZzzzzzzZZZZZZZzzzzzzzzz" << std::endl;
	srand(time(0));
	unsigned int i = rand() % 2;
	if (!i)
		std::cout << target << " has not been robomotized" << std::endl;
	else
		std::cout << target << " has been robotomized successfully" << std::endl;
}

