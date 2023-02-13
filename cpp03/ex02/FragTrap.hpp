#include <string>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <fstream>
#include <cmath>

#include "ClapTrap.hpp"

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

class FragTrap : public ClapTrap
{
    public :
        FragTrap(const std::string &name);
        FragTrap(const FragTrap &src);
        ~FragTrap();

        FragTrap &operator=(const FragTrap & src);
        void highFivesGuys(void);
    
    private :
        FragTrap();
};

#endif