#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <iostream>

class PresidentialPardonForm : public Form
{
	public :
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm &src);
		virtual ~PresidentialPardonForm();

		PresidentialPardonForm &operator=(const PresidentialPardonForm & src);

		void	execute(Bureaucrat const &executor);


	private :
		std::string	target;
};

#endif
