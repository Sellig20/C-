#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::~Zombie()
{
    std::cout << this->zombieName << " slowly dies ...:(" << std::endl;
}

void Zombie::announce(void)
{
    std::cout << this->zombieName << " : BraiiiiinnnnzzzzzzZ..." << std::endl;
}

void Zombie::init_name(std::string name)
{
    this->zombieName = name;
}