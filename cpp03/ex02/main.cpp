//#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
   
    {
        ClapTrap Juana("Juana");

        Juana.attack("Kyu");
        Juana.takeDamage(1);
        Juana.beRepaired(1);
        Juana.takeDamage(1);
        Juana.beRepaired(1);
    }
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
        FragTrap Colmax("Colmax");

        Colmax.attack("grosPiek");
        Colmax.highFivesGuys();
        Colmax.takeDamage(1);
        Colmax.beRepaired(1);
        Colmax.takeDamage(1);
        Colmax.beRepaired(1);
    }

    return (0);
}

