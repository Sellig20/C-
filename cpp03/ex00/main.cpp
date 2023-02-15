#include "ClapTrap.hpp"

int main()
{
    ClapTrap Juana("Juana");
    ClapTrap Shima(Juana);
    ClapTrap Adrien = Shima;

    Juana.attack("Kyu");
    Juana.takeDamage(4);
    Juana.beRepaired(5);
    Juana.takeDamage(6);
    Juana.beRepaired(7);
    Juana.attack("Po");
    Juana.attack("Po");
    Juana.attack("Po");
    Juana.attack("Po");
    Juana.attack("Po");
    Juana.attack("Po");
    Juana.attack("Po");
    Juana.attack("Po");
    Juana.attack("Po");
    Juana.attack("Po");
    Juana.attack("Po");

    return (0);
}
