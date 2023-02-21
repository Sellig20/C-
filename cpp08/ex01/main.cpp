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
    std::cout << "=================================" << std::endl;
    {
        Span Tab(10);

        Tab.addNumber(2);
        Tab.addNumber(76);
        Tab.addNumber(3);
        Tab.addNumber(-9);
        Tab.addNumber(888);
        std::cout << "Longest span -> " << Tab.longestSpan() << std::endl;
        std::cout << "Shortest span -> " << Tab.shortestSpan() << std::endl;
    }
    std::cout << "=================================" << std::endl;
    {
        Span Tab(10);

        Tab.addNumber(2147483647);
        Tab.addNumber(76);
        Tab.addNumber(3);
        Tab.addNumber(-2147483647);
        Tab.addNumber(888);
        std::cout << "Longest span -> " << Tab.longestSpan() << std::endl;
        std::cout << "Shortest span -> " << Tab.shortestSpan() << std::endl;
    }
    std::cout << "=================================" << std::endl;
    {
        Span Tab(10);

        std::vector<int> copy;

        copy.push_back(2);
        copy.push_back(50);
        copy.push_back(1);
        copy.push_back(-10);

        Tab.addNumber(copy.begin(), copy.end());
        std::cout << "Longest span -> " << Tab.longestSpan() << std::endl;
        std::cout << "Shortest span -> " << Tab.shortestSpan() << std::endl;
    }
}