/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecolmou <jecolmou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 18:35:57 by jecolmou          #+#    #+#             */
/*   Updated: 2023/02/15 18:54:26 by jecolmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "------Default Constructor called------" << std::endl;
	type = "";
}

WrongAnimal::WrongAnimal(std::string name)
{
	std::cout << "------Name Constructor called------" << std::endl;
	type = name;
}

WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
	std::cout << "------Copied Constructor called------" << std::endl;
	*this = src;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "------Destructor called------" << std::endl;
}

WrongAnimal & WrongAnimal::operator=(const WrongAnimal &src)
{
    std::cout << "------Copied Operator called------ " << std::endl;
    type = src.getType();
	return (*this);
}

std::string WrongAnimal::getType() const
{
	return (type);
}

void WrongAnimal::makeSound() const
{
	std::cout << "WrongAnimals make sound" << std::endl;
}
