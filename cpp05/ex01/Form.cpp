#include "Form.hpp"

Form::Form() : name(""), isSigned(false), signGrade(150), executeGrade(150)
{
    std::cout << "------Default FORM Constructor called-----------" << std::endl;
}

Form::Form(const std::string &name, const int signGrade, const int executeGrade) : name(name), isSigned(false), signGrade(signGrade), executeGrade(executeGrade)
{
    std::cout << "------Name & grade FORM Constructor called------------" << std::endl;
	if (signGrade < 1)
		throw Form::GradeTooHighException();
	if (signGrade > 150)
		throw Form::GradeTooLowException();
	if (executeGrade < 1)
		throw Form::GradeTooHighException();
	if (executeGrade > 150)
		throw Form::GradeTooLowException();
}

Form::Form(const Form &src) : name(src.name), isSigned(src.isSigned), signGrade(src.signGrade), executeGrade(src.executeGrade)
{
    std::cout << "------Copy FORM Constructor called-------------" << std::endl;
    (*this) = src;
}

Form::~Form()
{
    std::cout << "------Default FORM Desstructor called-----------------" << std::endl;
}

Form &Form::operator=(const Form &src)
{
	isSigned = src.isSigned;
	return (*this);
}

void	Form::beSigned(const Bureaucrat& B)
{
	std::cout << "Will he/her be able to sign Form ?" << std::endl;
	if (B.getGrade() > signGrade)
		throw Form::GradeTooLowException();
	else if (isSigned == true)
		std::cout << "Form is already signed !" << std::endl;
	else
		isSigned = true;
}

int		Form::getSignGrade() const
{
	return signGrade;
}

std::string Form::getName() const
{
	return (name);
}

bool    Form::getIsSigned() const
{
	return isSigned;
}
