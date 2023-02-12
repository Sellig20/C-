/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecolmou <jecolmou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 19:13:39 by jecolmou          #+#    #+#             */
/*   Updated: 2023/02/08 16:54:46 by jecolmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>
#include <iomanip>
#include <cstdlib>
#include "phonebook.hpp"

Phonebook::Phonebook()
{
    this->index = 0;
}

Phonebook::~Phonebook() {}

std::string ft_substr_point(std::string str)
{
    if (str.length() > 10)
    {
       str = str.substr(0, 9) + ".";
    }
    return (str);
}

static int add(std::string &input)
{
    while (1)
    {
        getline(std::cin, input);
        if(std::cin.eof())
            exit(0);
        if (input.empty())
            std::cout << "Empty sentence, please, try again." << std::endl;
        else
            return (0);
    }
}

static void search(Contact contact, int i)
{
    std::string str;
    (void)contact;
    str = i;

    std::cout << std::setw(10) << std::right << i;
    std::cout << "| " ;
    str = contact.get_first_name();
    std::cout << std::setw(10) << std::right << ft_substr_point(str);
    std::cout << "| " ;
    str = contact.get_last_name();
    std::cout << std::setw(10) << std::right << ft_substr_point(str);
    std::cout << "| " ;
    str = contact.get_nickname();
    std::cout << std::setw(10) << std::right << ft_substr_point(str) << std::endl ;
}

int Phonebook::add_contact()
{
    Contact tmp;
    std::string input;

    std::cout << "First name :" << std::endl;
    add(input);
    tmp.set_first_name(input);

    std::cout << "Last name :" << std::endl;
    add(input);
    tmp.set_last_name(input);

    std::cout << "Nickname :" << std::endl;
    add(input);
    tmp.set_nickname(input);

    std::cout << "Phone number :" << std::endl;
    add(input);
    tmp.set_phone_number(input);

    std::cout << "Darkest little secret :" << std::endl;
    add(input);
    tmp.set_darkest_secret(input);

    this->people[this->index] = tmp;
    this->index = (this->index + 1) % 8;
    return (0);
}

int Phonebook::search_contact()
{
    std::string input;
    int i;
    int j;
    j = 0;

    std::cout << "---------------------------------------- " << std::endl ;
    std::cout << std::setw(10) << "Index";
    std::cout << "| ";
    std::cout << std::setw(10) << "First name";
    std::cout << "| ";
    std::cout << std::setw(10) << "Last name";
    std::cout << "| ";
    std::cout << std::setw(10) << "Nickname" << std::endl;
    while (j < 8)
    {
       if (this->people[j].get_first_name().empty() == false)
        {
            search(this->people[j], j);
        }
        j++;
    }
    i = 0;
    if (!(this->people[0].get_first_name().empty()))
    {
        std::cout << "Hey user ! Wanna know about someone ? Enter his index !" << std::endl;
        while (1)
        {
            getline(std::cin, input);
            if(std::cin.eof())
                exit(0);
            if (input.empty())
                std::cout << "I don't understand. Please write a valid index." << std::endl;
            i = input[0] - 48;
            if (!(input[0] >= '0' && input[0] <= '9'))
                std::cout << "I don't understand. Please write a valid index." << std::endl;
            else if (atoi(input.c_str()) < 0 || atoi(input.c_str()) > 7)
                std::cout << "I don't understand. Please write a valid index." << std::endl;
            else if (this->people[i].get_first_name().empty())
                std::cout << "Not existing ! U sure you have friends ? :[" << std::endl;
            else
                break ;
        }
        std::cout << "First name -> ";
        std::cout << this->people[i].get_first_name() << std::endl;
        std::cout << "Last name -> ";
        std::cout << this->people[i].get_last_name() << std::endl;
        std::cout << "Nickname -> ";
        std::cout << this->people[i].get_nickname() << std::endl;
        std::cout << "Phone number -> " ;
        std::cout << this->people[i].get_phone_number() << std::endl;
        std::cout << "Darkest little secret -> " ;
        std::cout << this->people[i].get_darkest_secret() << std::endl;
    }
    else
        std::cout << "Add someone before searching ! ;)" << std::endl;
    return (0);
}
