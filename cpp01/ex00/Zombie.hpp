#include <iostream>
#include <cstring>

#ifndef ZOMBIE_H
#define ZOMBIE_H

class Zombie
{
    public :
        Zombie();
        ~Zombie();

        void announce(void);
        void init_name(std::string name);

    private :
        std::string zombieName;
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif
