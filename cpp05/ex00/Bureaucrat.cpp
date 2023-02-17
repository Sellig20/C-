#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name(""), grade(150)
{
    std::cout << "------Default BUREAUCRAT Constructor called------" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade): name(name)
{
    std::cout << "------Name & grade BUREAUCRAT Constructor called------" << std::endl;
    if (grade < 1)
        throw GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();
    this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src)
{
    std::cout << "------Copy BUREAUCRAT Constructor called------" << std::endl;
    (*this) = src;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "------Default BUREAUCRAT Desstructor called------" << std::endl;
}

////////////////////////////////

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src)
{
    this->grade = src.getGrade();
    return (*this);
}

std::string Bureaucrat::getName() const
{
    return (this->name);
}

int         Bureaucrat::getGrade() const
{
    return (this->grade);
}

void        Bureaucrat::incrementGrade()
{
    if (grade == 1)
       throw GradeTooHighException();
    grade -= 1;
}

void        Bureaucrat::decrementGrade()
{
    if (grade == 150)
       throw GradeTooLowException();
    grade += 1;
}

void        Bureaucrat::setGrade(int grade)
{
    if (grade < 1)
    {
        std::cout << "Impossible grade. Maximum is 1" << std::endl;
        //throw GradeTooHighException();
    }
    else if (grade > 150)
    {
        std::cout << "Impossible grade. Minimum is 150" << std::endl;
        //throw GradeTooLowException();
    }
    // this->grade = grade;
}

std::ostream &operator<<(std::ostream &o, const Bureaucrat &source)
{
    o << source.getName() << " bureaucrat grade is " << source.getGrade();
    return (o);
}
