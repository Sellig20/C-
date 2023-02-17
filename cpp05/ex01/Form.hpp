#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Form
{
	public :
		Form();
		Form(const std::string &name, const int signGrade, const int executeGrade);
		Form(const Form &src);
		~Form();
		Form &operator=(const Form & src);

		void	beSigned(Bureaucrat B);
		int		getSignGrade();
		std::string	getName();
		bool getIsSigned();

	class GradeTooHighException : public std::exception
	{
		public :
			virtual const char *what() const throw() // virtual pour beneficier les enfants de cette classe
			{
				return ("The grade is too high ...");
			}
	};
	class GradeTooLowException : public std::exception
	{
		public :
			virtual const char *what() const throw()
			{
				return ("The grade is too low..." );
			}
	};

	private :
		const std::string	name;
		bool		isSigned;
		const int	signGrade;
		const int	executeGrade;

};

std::ostream &operator<<(std::ostream &o, const Form &source);


#endif
