#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon) {}
HumanA::~HumanA() {}

void HumanA::setName(std::string name)
{
    this->name = name;
}

void HumanA::initWeapon(Weapon &weapon)
{
    this->weapon = weapon;
}

void HumanA::attack()
{
    std::cout << this->name << " attacks with her " << this->weapon.getType() << std::endl;
}