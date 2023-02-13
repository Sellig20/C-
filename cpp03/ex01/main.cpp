//#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
   
    {
        ScavTrap Jeannot("Jeannot");

        Jeannot.attack("Kakyu");
        Jeannot.guardGate();
        Jeannot.takeDamage(1);
        Jeannot.beRepaired(1);
        Jeannot.takeDamage(1);
        Jeannot.beRepaired(1);
    }
    {
        ClapTrap Juana("Juana");

        Juana.attack("Kyu");
        Juana.takeDamage(1);
        Juana.beRepaired(1);
        Juana.takeDamage(1);
        Juana.beRepaired(1);
    }

    return (0);
}