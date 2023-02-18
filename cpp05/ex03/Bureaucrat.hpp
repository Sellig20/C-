#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <stdexcept>
#include <iostream>

#include "Form.hpp"

class Form;

class Bureaucrat
{
    public :
        Bureaucrat();
        Bureaucrat(const std::string &name, int grade);
        Bureaucrat(const Bureaucrat &src);
        ~Bureaucrat();
        Bureaucrat &operator=(const Bureaucrat &src);

        std::string getName() const;
        int         getGrade() const;
        void        incrementGrade();
        void        decrementGrade();
        void        signForm(Form& f);
        void        execute(Bureaucrat const &executor) const;
        void        executeForm(Form const &form) const;

        //Exceptions are implemented in the Mother Class
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
        const std::string name;
        int grade;
};

std::ostream &operator<<(std::ostream &o, const Bureaucrat &source);

#endif
