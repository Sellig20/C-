#include <string>
#include <iomanip>

#ifndef WEAPON_H
#define WEAPON_H

class Weapon
{
    public :
        Weapon(std::string type);
        ~Weapon();

        std::string &getType();
        void setType(std::string type);

    private :
        std::string type;
};

#endif