/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecolmou <jecolmou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/15 20:03:28 by jecolmou          #+#    #+#             */
/*   Updated: 2023/02/15 20:13:02 by jecolmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "------Default BRAIN Constructor called------" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		ideas[i] = "Hello world";
	}
}

Brain::Brain(const Brain &src)
{
	*this = src;
}

Brain::~Brain()
{
	std::cout << "------Default BRAIN Destructor called------" << std::endl;
}

Brain & Brain::operator=(const Brain &src)
{
	std::cout << "------Default BRAIN Operator called------" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		ideas[i] = src.ideas[i];
	}
	return (*this);
}
