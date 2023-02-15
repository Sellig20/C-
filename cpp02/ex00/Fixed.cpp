#include "Fixed.hpp"

Fixed::Fixed()
{
    this->nb_bits = 0;
    std::cout << "Constructor by default called" << std::endl;
}

Fixed::Fixed(const Fixed &src)
{
    std::cout << "Copied Constructor called" << std::endl;
    *this = src;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=(const Fixed &src)
{
    std::cout << "Copied Operator called" << std::endl;
    this->nb_bits = src.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return nb_bits;
}

void Fixed::setRawBits(int const raw)
{
    nb_bits = raw;
}
