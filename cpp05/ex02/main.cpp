#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

void    test1(void)
{
    std::cout << std::endl;
    {
        ShrubberyCreationForm Escorpion;
        ShrubberyCreationForm Scorpio("Juana");
        ShrubberyCreationForm BbScorpion(Scorpio);

        std::cout << Escorpion << std::cout << std::endl;
        std::cout << Scorpio << std::cout << std::endl;
        std::cout << BbScorpion << std::cout << std::endl;
    }
    std::cout << std::endl;
}

void    test2(void)
{
    std::cout << std::endl;
    {
        RobotomyRequestForm Robotox;
        RobotomyRequestForm Robotix("Robotix");
        RobotomyRequestForm Robotax(Robotox);

        std::cout << Robotox << std::cout << std::endl;
        std::cout << Robotix << std::cout << std::endl;
        std::cout << Robotax << std::cout << std::endl;
    }
    std::cout << std::endl;
}

void    test3(void)
{
    std::cout << std::endl;
    {
        PresidentialPardonForm Sicario1;
        std::cout << "AAAAAAAAAAA" << std::endl;
        PresidentialPardonForm Sicario2("Sicario2");
        PresidentialPardonForm Sicario3(Sicario2);

        std::cout << Sicario1 << std::cout << std::endl;
        std::cout << Sicario2 << std::cout << std::endl;
        std::cout << Sicario3 << std::cout << std::endl;
    }
    std::cout << std::endl;
}

void    test4(void)
{
    std::cout << std::endl;
    {
        Bureaucrat Scorpio("Scorpio", 26);
        ShrubberyCreationForm ASCIITree;

        // Scorpio.executeForm(ASCIITree);
        // std::cout << std::endl;
        // Scorpio.signForm(ASCIITree);
        // std::cout << std::endl;
        // Scorpio.executeForm(ASCIITree);
        std::cout << std::endl;
        try
        {
            ASCIITree.beSigned(Scorpio);
            Scorpio.executeForm(ASCIITree);
        }
        catch(const std::exception& e)
        {
            std::cout << e.what() << std::endl;
        }
    }
    std::cout << std::endl;
}

void    test5(void)
{
    std::cout << std::endl;
    {
        Bureaucrat Mecano("Mecano", 10);
        RobotomyRequestForm Robotox;

        // Mecano.executeForm(Robotox);
        // std::cout << std::endl;
        // Mecano.signForm(Robotox);
        // std::cout << std::endl;
        // Mecano.executeForm(Robotox);
        std::cout << std::endl;
        try
        {
            Robotox.beSigned(Mecano);
            Mecano.executeForm(Robotox);
        }
        catch(const std::exception& e)
        {
            std::cout << e.what() << std::endl;
        }
    }
    std::cout << std::endl;
}

void    test6(void)
{
    std::cout << std::endl;
    {
        Bureaucrat Pablo("Pablo", 1);
        PresidentialPardonForm Sicario1("Sicario1");

        // std::cout << std::endl;
        // Pablo.executeForm(Sicario1);
        // std::cout << std::endl;
        // Pablo.signForm(Sicario1);
        // std::cout << std::endl;
        // Pablo.executeForm(Sicario1);
        std::cout << std::endl;
        try
        {
            Sicario1.beSigned(Pablo);
            Pablo.executeForm(Sicario1);
        }
        catch(const std::exception& e)
        {
            std::cout << e.what() << std::endl;
        }
    }
    std::cout << std::endl;
}

int main()
{
    std::cout << "🔥 ----------------------- CONSTRUCTOR SHRUBBERY ------------------- 🔥" << std::endl;
    std::cout << std::endl;
    test1();
    std::cout << std::endl;
    std::cout << "🔥 ----------------------- CONSTRUCTOR ROBOTOMY ------------------- 🔥" << std::endl;
    std::cout << std::endl;
    test2();
    std::cout << std::endl;
    std::cout << "🔥 ----------------------- CONSTRUCTOR PRESIDENT ------------------- 🔥" << std::endl;
    std::cout << std::endl;
    test3();
    std::cout << std::endl;
    std::cout << "🔥 ----------------------- MANDATORY SHRUBBERY ------------------- 🔥" << std::endl;
    std::cout << std::endl;
    test4();
    std::cout << std::endl;
    std::cout << "🔥 ----------------------- MANDATORY ROBOTOMY ------------------- 🔥" << std::endl;
    std::cout << std::endl;
    test5();
    std::cout << std::endl;
    std::cout << "🔥 ----------------------- MANDATORY PRESIDENT ------------------- 🔥" << std::endl;
    std::cout << std::endl;
    test6();
    std::cout << std::endl;
    
    return (0);
}
