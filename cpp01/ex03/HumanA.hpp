#include <iostream>
#include "Weapon.hpp"

#ifndef HUMAN_A_H
#define HUMAN_A_H

class HumanA
{
    public :
        HumanA(std::string name, Weapon &weapon);
        ~HumanA();

        void setName(std::string name);
        void initWeapon(Weapon &weapon);
        void attack();

    private :
        std::string name;
        Weapon &weapon;
};

#endif