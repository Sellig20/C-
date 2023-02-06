#include <iostream>
#include <cstring>

#ifndef ZOMBIE_H
#define ZOMBIE_H

class Zombie
{
    public :
        Zombie();
        ~Zombie();

        void announce();
        void init_name(std::string name);
    
    private :
        std::string zombieName;
};

Zombie *zombieHorde(int N, std::string name);

#endif

