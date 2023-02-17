#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Form
{
	public :
		Form();
		Form(const std::string &name,  const int signGrade, const int executeGrade);
		Form(const Form &src);
		virtual ~Form();
		Form &operator=(const Form & src);

		void	beSigned(Bureaucrat B);
		int		getSignGrade() const;
		std::string	getName() const;
		bool getIsSigned() const;
		int	getExecuteGrade() const;

		virtual void	execute(Bureaucrat const &executor) = 0;

	class GradeTooHighException : public std::exception
	{
		public :
			const char *what() const throw() // virtual pour beneficier les enfants de cette classe
			{
				return ("The grade is too high ...");
			}
	};
	class GradeTooLowException : public std::exception
	{
		public :
			const char *what() const throw()
			{
				return ("The grade is too low...");
			}
	};
	class IsNotSignedException : public std::exception
	{
		public :
			const char *what() const throw()
			{
				return ("The form is not signed ");
			}
	};
	protected :
		const std::string	name;
		bool		isSigned;
		const int	signGrade;
		const int	executeGrade;

};

std::ostream &operator<<(std::ostream &o, const Form &source);


#endif
