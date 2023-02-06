#include <iostream>
#include "Weapon.hpp"

#ifndef HUMAN_B_H
#define HUMAN_B_H

class HumanB
{
    public :
        HumanB(std::string name);
        ~HumanB();

        void setName(std::string name);
        void initWeapon(Weapon &weapon);
        void attack();

    private :
        std::string name;
        Weapon *weapon;
};

#endif