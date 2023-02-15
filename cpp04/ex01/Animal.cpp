/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecolmou <jecolmou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 18:35:57 by jecolmou          #+#    #+#             */
/*   Updated: 2023/02/15 21:44:42 by jecolmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "------Default ANIMAL Constructor called------" << std::endl;
	type = "";
}

Animal::Animal(std::string name)
{
	std::cout << "------Name ANIMAL Constructor called------" << std::endl;
	type = name;
}

Animal::Animal(const Animal &src)
{
	std::cout << "------Copied ANIMAL Constructor called------" << std::endl;
	*this = src;
}

Animal::~Animal()
{
	std::cout << "------Destructor ANIMAL called------" << std::endl;
}

Animal & Animal::operator=(const Animal &src)
{
    std::cout << "------Copied Operator called------ " << std::endl;
    type = src.getType();
	return (*this);
}

std::string Animal::getType() const
{
	return (type);
}

void Animal::makeSound() const
{
	std::cout << "Animals make sound" << std::endl;
}
