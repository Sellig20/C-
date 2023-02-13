#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : namePriv(""), hitPoints(10), energyPoints(10), attackDamages(0)
{
    std::cout << "---1---Constructor ClapTrap legacy to Scav called------" << std::endl;
    return ;
}

ClapTrap::ClapTrap(const std::string name) : namePriv(name), hitPoints(10), energyPoints(10), attackDamages(0)
{
    std::cout << "--3-Constructor default ClapTrap called---" << std::endl;
    return ;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
    std::cout << "---2---Copied Constructor called------" << std::endl;
    *this = src; //pointeur sur this pour que tOUTE mon instance prenne src
    return ;
}

ClapTrap::~ClapTrap()
{
    std::cout << "----4--Destructor ClapTrap called------" << std::endl;
    return ;
}

const std::string &ClapTrap::getName() const
{
    return (this->namePriv);
}

ClapTrap & ClapTrap::operator=(const ClapTrap &src)
{
    std::cout << "------Copied Operator called------ " << std::endl;
    std::cout << "copie" << src << std::endl;
    return (*this); // parce que retourne TOUTE la source qu'il a copié
}

std::ostream & operator<<(std::ostream & o, ClapTrap const & src)
{
    o << "ClapTrap1 " << src.getName();
    return (o);
}

void    ClapTrap::attack(const std::string &target)
{
    std::cout << "ClapTrap " << this->namePriv << " attacks " << target << " causing " << this->attackDamages << " hit points !" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    if (amount > (unsigned)hitPoints)
    {
        std::cout << "Impossible main arguments. Limit is at 100, please respect tha laws' game." << std::endl;
        exit(0);
    }
    this->energyPoints = (this->energyPoints - amount);
    if (this->energyPoints < 0)
    {
        std::cout << "ClapTrap " << this->namePriv << " is in an concerning situation because of" << amount << " damages he took in the chest" << std::endl;
    }
    else if (this->energyPoints == 0)
    {
        std::cout << "ClapTrap " << this->namePriv << " is already dead ! Have some dignity and let it be!" << std::endl;
    }
    else
    {
        std::cout << "ClapTrap " << this->namePriv << " took " << amount << " hit points" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    this->energyPoints = (this->energyPoints + amount);
    std::cout << "ClapTrap " << this->namePriv << " got " << amount << " energy points so it's fine. Player has " << this->energyPoints << " energy points now and is ready to FIGHT AGAIN" << std::endl;
}