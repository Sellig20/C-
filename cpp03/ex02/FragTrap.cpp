/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecolmou <jecolmou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 21:36:58 by jecolmou          #+#    #+#             */
/*   Updated: 2023/02/14 21:37:22 by jecolmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap(const std::string &name)
{
    this->namePriv = name;
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamages = 30;
    std::cout << "------Constructor FragTrap called------" << std::endl;
    return ;
}

FragTrap::FragTrap()
{
    std::cout << "------Constructor default FragTrap called------" << std::endl;
    return ;
}

FragTrap::FragTrap(FragTrap const &src)
{
    std::cout << "------Copied FragTrap Constructor called-------" << std::endl;
    *this = src;
    return ;
}

FragTrap::~FragTrap()
{
    std::cout << "------Copied Constructor called------" << std::endl;
}

FragTrap & FragTrap::operator=(const FragTrap &src)
{
    std::cout << "------Copied FRAG Operator called------" << std::endl;
    std::cout << "copie" << src <<std::endl;
    hitPoints = src.getHitPoint();
    energyPoints = src.getEnergyPoint();
    attackDamages = src.getAttackDamage();
    return (*this);
}

void FragTrap::highFivesGuys()
{
    std::cout << "HIGH FIVEEEEEEEEEEEEEE YEAH" << std::endl;
    return;
}




