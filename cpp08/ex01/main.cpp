#include "Span.hpp"

#include <vector>

void    display(std::vector<int> nb)
{
    for (std::vector<int>::iterator i = nb.begin(); i < nb.end(); i++)
    {
        std::cout << *i << std::endl;
    }
}

int main()
{
    std::cout << "-------------- MANDATORY SPAN ------------------" << std::endl;
    std::cout << std::endl;
    {
        Span Tab(5);

        Tab.addNumber(2);
        Tab.addNumber(76);
        Tab.addNumber(3);
        Tab.addNumber(-9);
        Tab.addNumber(888);

        std::cout << "Longest span -> " << Tab.longestSpan() << std::endl;
        std::cout << "Shortest span -> " << Tab.shortestSpan() << std::endl;
    }
    std::cout << std::endl;
    std::cout << "-------------- MAX/MIN SPAN ------------------" << std::endl;
    std::cout << std::endl;
    {
        Span Tab(6);

        Tab.addNumber(2147483647);
        Tab.addNumber(76);
        Tab.addNumber(86);
        Tab.addNumber(3);
        Tab.addNumber(-2147483647);
        Tab.addNumber(888);

        std::cout << "Longest span -> " << Tab.longestSpan() << std::endl;
        std::cout << "Shortest span -> " << Tab.shortestSpan() << std::endl;
    }
    std::cout << std::endl;
    std::cout << "---------------- W/o ADD_NUMBER ----------------" << std::endl;
    std::cout << std::endl;
    {
        Span Tab(4);

        std::vector<int> copy;

        copy.push_back(2);
        copy.push_back(50);
        copy.push_back(1);
        copy.push_back(-10);
        display(copy);
        std::cout << std::endl;

        Tab.addNumber(copy.begin(), copy.end());
        std::cout << "Longest span -> " << Tab.longestSpan() << std::endl;
        std::cout << "Shortest span -> " << Tab.shortestSpan() << std::endl;
    }
}
