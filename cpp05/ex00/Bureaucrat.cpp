#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
    std::cout << "------Default BUREAUCRAT Constructor called------" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade): name(name)
{
    std::cout << "------Name & grade BUREAUCRAT Constructor called------" << std::endl;
    try
    {
        {
            setGrade(grade);
            this->grade = grade;
        }
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
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
    if (this->grade == 1)
        std::cout << "🔥 Rank 1 -- you're the boss here 🔥" << std::endl;
    // if (this->grade == 0)
    //     throw GradeTooHighException();
    try
    {
        setGrade(this->grade - 1); //because increment = getting higher & getting near 1 so you down
        this->grade = (this->grade - 1);
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
}

void        Bureaucrat::decrementGrade()
{
    if (this->grade == 150)
        std::cout << "😵‍💫 Rank 150 -- *sucks* 😵‍💫" << std::endl;
    // if (this->grade == 150)
    //     throw GradeTooLowException();
    try
    {
        setGrade(this->grade + 1); //because decrement = getting lower & getting near 150 so you up
        this->grade = (this->grade + 1);
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
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

