#include <string>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include <fstream>
#include "Harl.hpp"

int main(int argc, char **argv)
{

    (void)argv;
    if (argc != 1)
        std::cout << "Error : wring number of arguments" << std::endl;
    
    Harl jeanne;
    std::cout << std::endl;
    jeanne.complain("DEBUG");
    jeanne.complain("INFO");
    jeanne.complain("WARNING");
    jeanne.complain("ERROR");
    std::cout << std::endl;
    return (0);
}
