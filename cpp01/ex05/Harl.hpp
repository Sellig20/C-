#include <string>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <fstream>

#ifndef HARL_H
#define HARL_H

class Harl
{
    public :
        Harl();
        ~Harl();
        void complain(std::string level);

    private :
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
    
    typedef void (Harl::*fct)(void);
};

#endif