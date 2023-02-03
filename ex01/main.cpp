#include <iostream>
#include <cstring>
#include "phonebook.hpp"

int main()
{
   Phonebook phone_b;
   std::string input;
   
    std::cout << "Welcome :) to your phone book !" << std::endl;
    std::cout << "Please, enter ADD, SEARCH or EXIT" << std::endl;

    while (getline(std::cin, input))
    {
        if (input == "ADD")
        {
           phone_b.add_contact();
        }
        else if (input == "SEARCH")
        {
           phone_b.search_contact();
        }
        else if (input == "EXIT")
            break;
        else
            std::cout << "I don't understand. Please choose a valid instruction." << std::endl;
        std::cout << "Please, enter ADD, SEARCH or EXIT" << std::endl;
    }
    std::cout << "Tchao la familia !" << std::endl;
    return (0);
}