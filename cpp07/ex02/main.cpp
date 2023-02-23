#include "Array.hpp"

int main()
{
    Array<int>   jeanne(10);
    Array<int>   shima;

    jeanne[0] = 6;
    jeanne[1] = 12;
    jeanne[2] = 67;
    jeanne[3] = 90;
    jeanne[4] = 32;

    Array<int>   adrien(jeanne);

    shima = jeanne;
    std::cout << "printing adrien \n" << adrien << std::endl;
    std::cout << "printing jeanne \n" << jeanne << std::endl;

    shima[2] = 7689;
    std::cout << "printing shima \n" << shima << std::endl;
    try
    {
        std::cout << "Is it possible to read Shima at 1th position although it's a 5 size array ?" << std::endl;
        std::cout << "---> ";
        std:: cout << shima[1];
    }
    catch (const std::exception& e)
    {
        std::cout << e.what() << std::endl;
    }
    std::cout << std::endl;
    std::cout << std::endl;
    try
    {
        std:: cout << shima[10];
    }
    catch (const std::exception& e)
    {
        std::cout << "Is it possible to read Shima at 10th position although it's a 5 size array ?" << std::endl;
        std::cout << "---> ";
        std::cout << e.what() << std::endl;
    }
}
