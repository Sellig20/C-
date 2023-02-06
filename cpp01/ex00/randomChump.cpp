#include "Zombie.hpp"

void randomChump(std::string name)
{
    Zombie randomChump;

    randomChump.init_name(name);
    randomChump.announce();
}