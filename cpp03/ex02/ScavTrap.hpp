#include <string>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <fstream>
#include <cmath>


#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"
class ScavTrap : public ClapTrap
{
    public :
        ScavTrap(const std::string name);
        ScavTrap(ScavTrap const &src);
        ~ScavTrap();

        ScavTrap &operator=(const ScavTrap & src);

        void attack(const std::string &target);
        void guardGate();
        
    private :
        ScavTrap();
};

#endif