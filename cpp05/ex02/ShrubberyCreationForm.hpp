#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>

class Form;

class ShrubberyCreationForm : public Form
{
	public :
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &src);
		virtual ~ShrubberyCreationForm();

		ShrubberyCreationForm &operator=(const ShrubberyCreationForm & src);

		void	execute(Bureaucrat const &executor);

		class CannotCreateFileException : public std::exception
		{
			public :
				const char *what() const throw() // virtual pour beneficier les enfants de cette classe
				{
					return ("_shrubbery file cannot be created");
				}
		};

	private :
		std::string	target;
};

#endif
