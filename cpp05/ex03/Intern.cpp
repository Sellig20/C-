#include "Intern.hpp"

Intern::Intern()
{
    std::cout << "------Default INTERN Constructor called------" << std::endl;
}

Intern::Intern(const Intern &src)
{
    std::cout << "------Copy Default INTERN Constructor called------" << std::endl;
	(*this) = src;
}

Intern::~Intern()
{
    std::cout << "------Default INTERN Destructor called------" << std::endl;

}

Intern &Intern::operator=(const Intern &src)
{
	(void)src;
    std::cout << "------Default INTERN Constructor called------" << std::endl;
	return (*this);
}

Form	*Intern::makeForm(std::string formName, std::string formTarget)
{
	std::string tab[] = {"robotomy request", "presidential pardon", "shrubbery creation"};
	int	i(-1);
	while (++i < 3)
	{
		if (!formName.compare(tab[i]))
			break ;
	}
	switch (i)
	{
		case 0:
			return (new RobotomyRequestForm(formTarget));
		case 1:
			return (new PresidentialPardonForm(formTarget));
		case 2:
			return (new ShrubberyCreationForm(formTarget));
		default:
			std::cout << "Inexistant Form Name" << std::endl;
	}
	return (NULL);
}
