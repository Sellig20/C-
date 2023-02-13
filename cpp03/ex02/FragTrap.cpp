#include "FragTrap.hpp"
#include "ClapTrap.hpp"

FragTrap::FragTrap(const std::string &name)
{
    this->namePriv = name;
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamages = 30;
    std::cout << "---100---Constructor FragTrap called------" << std::endl;
    return ;
}

FragTrap::FragTrap()
{
    std::cout << "---200---Constructor default FragTrap called------" << std::endl;
    return ;
}

FragTrap::FragTrap(FragTrap const &src)
{
    std::cout << "---300---Copied FragTrap Constructor called-------" << std::endl;
    *this = src;
    return ;
}

FragTrap::~FragTrap()
{
    std::cout << "---400---Copied Constructor called------" << std::endl;
}

FragTrap & FragTrap::operator=(const FragTrap &src)
{
    std::cout << "------Copied FRAG Operator called------" << std::endl;
    std::cout << "copie" << src <<std::endl;
    return (*this);
}

void FragTrap::highFivesGuys()
{
    std::cout << "HIGH FIVEEEEEEEEEEEEEE YEAH" << std::endl;
    return;
}




