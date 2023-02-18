#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name(""), grade(150)
{
    std::cout << "------Default BUREAUCRAT Constructor called------" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade): name(name)
{
    std::cout << "------Name & grade BUREAUCRAT Constructor called------" << std::endl;
    if (grade < 1)
        throw ArgTooHighException();
    if (grade > 150)
        throw ArgTooLowException();
    this->grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src) : name(src.name), grade(src.grade)
{
    std::cout << "------Copy BUREAUCRAT Constructor called--------------" << std::endl;
}

Bureaucrat::~Bureaucrat()
{
    std::cout << "------Default BUREAUCRAT Desstructor called-----------" << std::endl;
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

void        Bureaucrat::signForm(Form& f)
{
    if (grade > f.getSignGrade())
    {
        std::cout << name << " couldn't sign " << f.getName() << " because his/her grade is too low" << std::endl;
        throw GradeTooLowException();    
    }
    else if (f.getIsSigned() == true)
        std::cout << name << " couldn't sign " << f.getName() << " because it is aready signed" << std::endl;
    else
    {
        f.beSigned(*(this));
        std::cout << name << " signed " << f.getName() << std::endl;
    }
}


std::ostream &operator<<(std::ostream &o, const Bureaucrat &source)
{
    o << source.getName() << ", bureaucrat grade " << source.getGrade() << std::endl;
    return (o);
}
