#include "ClapTrap.hpp"

int main()
{
    ClapTrap Juana("Juana");

    Juana.attack("Kyu");
    Juana.takeDamage(1);
    Juana.beRepaired(1);
    Juana.takeDamage(1);
    Juana.beRepaired(1);

    return (0);
}