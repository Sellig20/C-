#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Unknown"), grade(150)
{
    std::cout << "------Default BUREAUCRAT Constructor called------" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade): name(name)
{
    std::cout << "------Name & grade BUREAUCRAT Constructor called------" << std::endl;
    if (grade < 1)
    {
        throw ArgTooHighException();
    }
    if (grade > 150)
    {
        throw ArgTooLowException();
    }
    this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) : name(src.name), grade(src.grade)
{
    std::cout << "------Copy BUREAUCRAT Constructor called------" << std::endl;
    (*this) = src;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "------Default BUREAUCRAT Desstructor called------" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src)
{
    this->grade = src.getGrade();
    return (*this);
}

std::string Bureaucrat::getName() const
{
    return (name);
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

// void        Bureaucrat::setGrade(int grade)
// {
//     if (grade < 1)
//         std::cout << "Impossible grade. Maximum is 1" << std::endl;
//     else if (grade > 150)
//         std::cout << "Impossible grade. Minimum is 150" << std::endl;
// }

std::ostream &operator<<(std::ostream &o, const Bureaucrat &source)
{
    o << source.getName() << " bureaucrat grade is " << source.getGrade();
    return (o);
}