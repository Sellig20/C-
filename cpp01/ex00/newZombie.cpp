#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
    Zombie *z;

    z = new Zombie();
    z->init_name(name);
    z->announce();
    return (z);
}