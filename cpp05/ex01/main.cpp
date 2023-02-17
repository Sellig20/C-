#include "Bureaucrat.hpp"

int main()
{
    std::cout << "------------ CONSTRUCTOR TESTS -------------" << std::endl;
    std::cout << std::endl;
    {
        Bureaucrat Roberta;
        Bureaucrat Murphy("Murphy", 2);
        Bureaucrat Addy(Murphy);

        std::cout << Roberta << std::endl;
        std::cout << Murphy << std::endl;
        std::cout << Addy << std::endl;
    }
    std::cout << std::endl;
    std::cout << "------------- BUREAUCRATS TEST ------------" << std::endl;
    std::cout << std::endl;
    {
        Bureaucrat Roberta("Roberta", 2);
        Bureaucrat Murphy("Murphy", 149);
        try
        {
            Roberta.incrementGrade();
        }
        catch(const std::exception& e)
        {
            std::cout << e.what() << std::endl;
        }
        std::cout << Roberta << std::endl;
        try
        {
            Murphy.decrementGrade();
        }
        catch(const std::exception& e)
        {
            std::cout << e.what() << std::endl;
        }
        std::cout << Murphy << std::endl;
    }
    std::cout << std::endl;
    std::cout << "----------- INVALID GRADES --------------" << std::endl;
    std::cout << std::endl;
    {
        try
        {
            //Tenk.incrementGrade();
            Bureaucrat Tenk("Tenk", 178);
        }
        catch(const std::exception& e)
        {
            std::cout << e.what() << std::endl;
        }
        //std::cout << Tenk << std::endl;
        try
        {
            //Doc.decrementGrade();
            Bureaucrat Doc("Doc", -4);
        }
        catch(const std::exception& e)
        {
            std::cout << e.what() << std::endl;
        }
        //std::cout << Doc << std::endl;
    }
    std::cout << std::endl;
    std::cout << "------------- INVALID INCREMENTATIONS ------------" << std::endl;
    std::cout << std::endl;
    {
        Bureaucrat Tenk("Tenk", 150);
        Bureaucrat Doc("Doc", 1);
        std::cout << "Before wrong decrementation : " << std::endl;
        try
        {
            Tenk.decrementGrade();
        }
        catch(const std::exception& e)
        {
            std::cout << e.what() << std::endl;
        }
        std::cout << "After wrong decrementation : " << Tenk << std::endl;
        std::cout << "Before wrong decrementation : " << std::endl;
        try
        {
            Doc.incrementGrade();
        }
        catch(const std::exception& e)
        {
            std::cout << e.what() << std::endl;
        }
        std::cout << "After wrong incrementation : " << Doc << std::endl;
    }
    return (0);
}