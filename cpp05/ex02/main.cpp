#include "Bureaucrat.hpp"
#include "Form.hpp"

void    test1(void)
{
    std::cout << std::endl;
    {
        Bureaucrat Roberta;
        Bureaucrat Murphy("Murphy", 2);
        Bureaucrat Addy(Murphy);

        std::cout << Roberta << std::endl;
        std::cout << Murphy << std::endl;
        std::cout << Addy << std::endl;
    }
}

void    test2(void)
{
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
}

void    test3(void)
{
    {
        try
        {
            Bureaucrat Tenk("Tenk", 178);
        }
        catch(const std::exception& e)
        {
            std::cout << e.what() << std::endl;
        }
        try
        {
            Bureaucrat Doc("Doc", -4);
        }
        catch(const std::exception& e)
        {
            std::cout << e.what() << std::endl;
        }
    }
}

void    test4(void)
{
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
}

void    test5(void)
{
    {
        Bureaucrat  Ginny("Ginny", 110);
        Bureaucrat  Ron("Ron", 99);
        Bureaucrat  George("George", 75);
        Bureaucrat  Fred(George);
        Form        certificateBroom("CertificateB", 100, 90);
        std::cout << std::endl;
        std::cout << "~~~~~~~~~~~~~~~~~~~~~ Presentation of the bureaucrats ~~~~~~~~~~~~~~~~~~~~~~~~~~~" << std::endl;
        std::cout << std::endl;
        std::cout << Ginny ;
        std::cout << Ron ;
        std::cout << George ;
        std::cout << Fred ;
        std::cout << std::endl;
        std::cout << "~~~~~~~~~~~~~~~~~~~~~~ Will the bureaucrats be allowed to sign Form ? ~~~~~~~~~~~~~" << std::endl;
        std::cout << std::endl;
        std::cout <<  " - GINNY - " << std::endl;
        try
        {
            {
                certificateBroom.beSigned(Ginny);
            }
        }
        catch(const std::exception& e)
        {
            std::cout << e.what() << std::endl;
        }
        try
        {
            {
                Ginny.signForm(certificateBroom);
            }
        }
        catch(const std::exception& e)
        {
            std::cout << e.what() << std::endl;
        }
        std::cout << std::endl;
        std::cout << " - RON - " << std::endl;
        try
        {
            {
                Ron.signForm(certificateBroom);
            }
        }
        catch(const std::exception& e)
        {
            std::cout << e.what() << std::endl;
        }
        std::cout << std::endl;
        try
        {
            {
                std::cout << " - GEORGE - " << std::endl;
                certificateBroom.beSigned(George);
            }
        }
        catch(const std::exception& e)
        {
            std::cout << e.what() << std::endl;
        }
        try
        {
            {
                George.signForm(certificateBroom);
            }
        }
        catch(const std::exception& e)
        {
            std::cout << e.what() << std::endl;
        }
        std::cout << std::endl;
        try
        {
            {
                std::cout << " - FRED (Copy constructor of George) - " << std::endl;
                certificateBroom.beSigned(George);
            }
        }
        catch(const std::exception& e)
        {
            std::cout << e.what() << std::endl;
        }
        try
        {
            {
                Fred.signForm(certificateBroom);
            }
        }
        catch(const std::exception& e)
        {
            std::cout << e.what() << std::endl;
        }
        std::cout << std::endl;
    }
}

int main()
{
    std::cout << "🔥 ------------------- CONSTRUCTOR TESTS ------------- 🔥" << std::endl;
    std::cout << std::endl;
    test1();
    std::cout << std::endl;
    std::cout << "🔥 ------------------- BUREAUCRATS TEST --------------- 🔥" << std::endl;
    std::cout << std::endl;
    test2();
    std::cout << std::endl;
    std::cout << "🔥 -------------------- INVALID GRADES ---------------- 🔥" << std::endl;
    std::cout << std::endl;
    test3();
    std::cout << std::endl;
    std::cout << "🔥 ---------------- INVALID INCREMENTATIONS ------------ 🔥" << std::endl;
    std::cout << std::endl;
    test4();
    std::cout << std::endl;
    std::cout << "🔥 ----------------------- SIGN FORM ------------------- 🔥" << std::endl;
    std::cout << std::endl;
    test5();
    std::cout << std::endl;
    
    return (0);
}
