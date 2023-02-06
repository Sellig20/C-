#include <string>
#include <iostream>
#include <iomanip>

int main()
{
    std::string str;
    str = "HI THIS IS BRAIN";

    std::string *stringPTR;
    stringPTR = &str;

    std::string &stringREF = str;


    std::cout << "Address of str = " << &str << std::endl;

    std::cout << "Address in stringPTR = " << stringPTR << std::endl;

    std::cout << "Address in stringREF = " << &stringREF << std::endl;

    std::cout << "Value of str = " << str << std::endl;

    std::cout << "Value pointed by stringPTR = " << *stringPTR << std::endl;

    std::cout << "Value pointed by stringREF = " << stringREF << std::endl;


}