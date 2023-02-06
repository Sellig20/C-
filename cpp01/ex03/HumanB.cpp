#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weapon(NULL) {}
HumanB::~HumanB() {}

void HumanB::setName(std::string name)
{
    this->name = name;
}

void HumanB::initWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}

void HumanB::attack()
{
    if (this->weapon)
    {
        std::cout << this->name << " attacks with her " << this->weapon->getType() << std::endl;
    }
    else
        std::cout << this->name << " attacks with nothing " << std::endl;
}



