/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jecolmou <jecolmou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 21:28:55 by jecolmou          #+#    #+#             */
/*   Updated: 2023/02/14 21:58:15 by jecolmou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : namePriv(""), hitPoints(10), energyPoints(10), attackDamages(0)
{
    std::cout << "------Constructor ClapTrap legacy called------" << std::endl;
    return ;
}

ClapTrap::ClapTrap(std::string name) : namePriv(name), hitPoints(10), energyPoints(10), attackDamages(0)
{
    std::cout << "------Constructor called------" << std::endl;
    return ;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
    std::cout << "------Copied Constructor called------" << std::endl;
    *this = src; //pointeur sur this pour que tOUTE mon instance prenne src
    return ;
}

ClapTrap::~ClapTrap()
{
    std::cout << "------Destructor called------" << std::endl;
    return ;
}

const std::string &ClapTrap::getName() const
{
    return (this->namePriv);
}

int     ClapTrap::getHitPoint() const
{
    return (hitPoints);
}

int		ClapTrap::getEnergyPoint() const
{
    return (energyPoints);
}

int		ClapTrap::getAttackDamage() const
{
    return (attackDamages);
}

ClapTrap & ClapTrap::operator=(const ClapTrap &src)
{
    std::cout << "------Copied Operator called------ " << std::endl;
    std::cout << "copie" << src << std::endl;
    hitPoints = src.getHitPoint();
    energyPoints = src.getEnergyPoint();
    attackDamages = src.getAttackDamage();

    return (*this); // parce que retourne TOUTE la source qu'il a copié
}

std::ostream & operator<<(std::ostream & o, ClapTrap const & src)
{
    o << "ClapTrap1 " << src.getName();
    return (o);
}

void    ClapTrap::attack(const std::string &target)
{
    if (this->hitPoints < 0 || this->energyPoints < 0)
    {
        std::cout << "ClapTrap " << this->namePriv << " doesn't have any energy points left.... :(" << std::endl;
        return ;
    }
    this->energyPoints = (this->energyPoints - 1);
    std::cout << "ClapTrap " << this->namePriv << " attacks " << target << " causing " << this->attackDamages << " of damages !" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    this->attackDamages = (this->attackDamages - amount);
    if (amount > (unsigned)hitPoints)
    {
        std::cout << "Impossible main arguments. Limit is at 10, please respect tha laws' game." << std::endl;
        return ;
    }
    std::cout << "ClapTrap " << this->namePriv << " took " << amount << " damages" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->hitPoints < 0 || this->energyPoints < 0)
    {
        std::cout << "ClapTrap " << this->namePriv << " doesn't have any energy points left.... :(" << std::endl;
        return ;
    }
    this->energyPoints = (this->energyPoints - 1);
    this->hitPoints = (this->hitPoints + amount);
    std::cout << "ClapTrap " << this->namePriv << " got " << amount << " energy points so it's fine. ClapTrap " << this->namePriv << " has " << this->energyPoints << " energy points now and is ready to FIGHT AGAIN" << std::endl;
}
