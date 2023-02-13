#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(std::string name)
{
    this->namePriv = name;
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamages = 20;
    std::cout << "---A---Constructor ScavTrap called------" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src)
{
    std::cout << "----C--Copied ScavTrap Constructor called------" << std::endl;
    *this = src;
    return ;
}

ScavTrap::~ScavTrap()
{
    std::cout << "--B----Destructor ScavTrap called------" << std::endl;
}

ScavTrap & ScavTrap::operator=(const ScavTrap &src)
{
    std::cout << "------Copied Operator called------ " << std::endl;
    std::cout << "copie" << src << std::endl;
    return (*this); // parce que retourne TOUTE la source qu'il a copié
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->namePriv << " enters in Gate keeper mode !! Good luck !" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
    std::cout << "Robot ScavTrap " << this->namePriv << " attacks " << target << " causing " << this->attackDamages << " hit points !" << std::endl;
}