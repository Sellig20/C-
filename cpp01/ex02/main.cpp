#include <string>
#include <iostream>
#include <iomanip>

int main()
{
    std::string str;
    str = "HI THIS IS BRAIN";

    std::string *stringPTR;
    stringPTR = &str;

    std::string& stringREF = str;

    std::cout << "Adresse de la string en memoire : " << &str << std::endl;
    std::cout << "Adresse stockee dans stringPTR : " << stringPTR << std::endl;
    std::cout << "Adresse stockee dans stringREF : " << &stringREF << std::endl;

    std::cout << "Valeur de la string : " << str << std::endl;
    std::cout << "Valeur pointee par stringPTR : " << *stringPTR << std::endl;
    std::cout << "Valur pointee par stringREF : " << stringREF << std::endl;
}
