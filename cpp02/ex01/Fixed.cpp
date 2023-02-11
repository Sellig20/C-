#include "Fixed.hpp"

Fixed::Fixed()
{
    this->nb = 0;
    std::cout << "Constructor by default called" << std::endl;
}

Fixed::Fixed(const Fixed &src)
{
    std::cout << "Constructor de recopie called" << std::endl;
    *this = src;
}

Fixed::Fixed(const int convert)
{
    std::cout << "Int constructor called" << std::endl;
    nb = (convert << bits);
    return ;
}

Fixed::Fixed(const float float_convert)
{
    std::cout << "Float constructor called" << std::endl;
    nb = roundf(float_convert * (1 << bits));
    return ;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=(const Fixed &src)
{
    std::cout << "Operator de recopie called" << std::endl;
    this->nb = src.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return nb;
}

void Fixed::setRawBits(int const raw)
{
    nb = raw;
}

int Fixed::toInt(void) const
{
    return (nb >> bits);
}

float Fixed::toFloat(void) const
{
    return ((float) nb / (1 << bits));
}

std::ostream & operator<<(std::ostream & o, Fixed const & src)
{
    o << src.toFloat();
    return (o);
}
