#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialCertificate", 25, 5), target("")
{
	std::cout << "------Default PRESIDENTIAL Constructor called------------" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialCertificate", 25, 5), target(target)
{
	std::cout << "------Target PRESIDENTIAL Constructor called---------------" << std::endl;

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src)
{
	std::cout << "------Default Copied PRESIDENTIAL Constructor called-------" << std::endl;
	(*this = src);

}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "------Default PRESIDENTIALPardonForm Destructor called------" << std::endl;

}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm & src)
{
	isSigned = src.isSigned;
	target = src.target;
    return (*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor)
{
	if (!isSigned)
		throw (Form::IsNotSignedException());
	if (executor.getGrade() > executeGrade)
		throw (Form::GradeTooLowException());
	if (executor.getGrade() > executeGrade)
		throw (GradeTooLowException());
	std::cout << target << "has been pardonned by Zaphod Beeblebrox" << std::endl;
}
