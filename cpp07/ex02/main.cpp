#include "Array.hpp"

int main()
{
    Array<int>   jeanne(5);
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

    std:: cout << shima[10];
}