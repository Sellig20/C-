/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecolmou <jecolmou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 19:13:35 by jecolmou          #+#    #+#             */
/*   Updated: 2023/02/06 19:43:00 by jecolmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
