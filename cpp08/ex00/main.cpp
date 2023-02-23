#include "easyfind.hpp"

#include <vector>

int main()
{
    std::vector<int>    test(5);
    std::vector<char>    test1(1);

    test[0] = 1;
    test[1] = 2;
    test[2] = 3;
    test[3] = 4;

    test1[0] = 'A';

    try
    {
        std::cout << *easyfind(test, 30) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    try
    {
        std::cout << *easyfind(test1, 65) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }


}
