#include <string>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <fstream>

#ifndef FIXED_H
#define FIXED_H

class Fixed
{
    public :
        Fixed();
        Fixed (const Fixed &src); //constructeur de recopie
        ~Fixed();
        Fixed & operator=(const Fixed &src); 

        int getRawBits(void) const;
        void setRawBits(int const raw);
    private :
        int nb_bits;
};

#endif