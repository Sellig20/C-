#include "Base.hpp"

Base *generate()
{
    Base    *res;
    int     nb;

    srand(time(0));
    nb = rand() % 3;
    res = NULL;
    if (nb == 0)
        res = new A;
    else if (nb == 1)
        res = new B;
    else if (nb == 2)
        res = new C;
    return (res);
}

void    identify(Base *p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
    else
        std::cout << "Error : the type does not exist" << std::endl;
    return ;
}

void    identify(Base &p)
{
    try
    {
        A &a = dynamic_cast<A&>(p);
        (void)a;
        std::cout << "A" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        B &b = dynamic_cast<B&>(p);
        (void)b;
        std::cout << "B" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    try
    {
        C &c = dynamic_cast<C&>(p);
        (void)c;
        std::cout << "C" << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
}

int main()
{
    Base *call;

    call = generate();
    identify(call);
    identify(*call);

    delete call;
}