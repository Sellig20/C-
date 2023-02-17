#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	std::cout << "-------CREATING BUREAUCRATS-------" << std::endl;
	Bureaucrat Murphy("Murphy", 25);
	std::cout << Murphy;
	Bureaucrat Doc("Doc", 2);
	std::cout << Doc;
	Bureaucrat Roberta("Roberta", 145);
	std::cout << Roberta;
	std::cout << std::endl;
	std::cout << "--------INTERNS MAKE FORMS--------" << std::endl;
	Intern	someRandomIntern;
	Form	*roboty;
	Form	*shrubb;
	Form	*president;
	Form	*badForm;
	roboty = someRandomIntern.makeForm("robotomy request", "Bender");
	shrubb = someRandomIntern.makeForm("shrubbery creation", "garden");
	president = someRandomIntern.makeForm("presidential pardon", "Fanny");
	try
	{
		badForm = someRandomIntern.makeForm("random form", "Jeanne");
	}
	catch(const std::exception &e)
	{
		std::cout << e.what() << std::endl;;
	}
	std::cout << std::endl;
	std::cout << "-------SIGN & EXECUTE Presidential------" << std::endl;
	Doc.executeForm(*president);
	Doc.signForm(*president);
	std::cout << *president;
	Doc.executeForm(*president);
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "-------SIGN & EXECUTE Shrubbery--------" << std::endl;
	Murphy.executeForm(*shrubb);
	Murphy.signForm(*shrubb);
	std::cout << *shrubb;
	Murphy.executeForm(*shrubb);
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "--------SIGN & EXECUTE Robotomy---------" << std::endl;
	Roberta.executeForm(*roboty);
	Roberta.signForm(*roboty);
	std::cout << *roboty;
	Roberta.executeForm(*roboty);
	std::cout << std::endl;
	delete roboty;
	delete president;
	delete shrubb;
    return (0);
}
