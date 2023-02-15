#include <string>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <fstream>
#include <cmath>

#ifndef FIXED_H
#define FIXED_H

class Fixed
{
    public :
        Fixed();
        Fixed (const Fixed &src); //constructeur de recopie
        Fixed(const int convert);
        Fixed(const float float_convert);
        ~Fixed();
        Fixed & operator=(const Fixed &src);

        int getRawBits(void) const;
        void setRawBits(int const raw);
        int toInt(void) const;
        float toFloat(void) const;

    private :
        int nb;
        const static int bits = 8;
};

std::ostream & operator<<(std::ostream & o, Fixed const & src);

#endif
