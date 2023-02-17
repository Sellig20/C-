#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
	public :
	 	Intern();
        Intern(const Intern &src);
        ~Intern();
        Intern &operator=(const Intern &src);

		Form*	makeForm(std::string formName, std::string formTarget);

};

#endif
