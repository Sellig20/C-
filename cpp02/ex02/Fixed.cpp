#include "Fixed.hpp"

Fixed::Fixed()
{
    this->nb = 0;
    // std::cout << "Constructor by default called" << std::endl;
}

Fixed::Fixed(const Fixed &src)
{
    // std::cout << "Constructor de recopie called" << std::endl;
    *this = src;
}

Fixed::Fixed(const int convert)
{
    // std::cout << "Int constructor called" << std::endl;
    nb = (convert << bits);
    return ;
}

Fixed::Fixed(const float float_convert)
{
    // std::cout << "Float constructor called" << std::endl;
    nb = roundf(float_convert * (1 << bits));
    return ;
}

Fixed::~Fixed()
{
    // std::cout << "Destructor called" << std::endl;
}

Fixed & Fixed::operator=(const Fixed &src)
{
    // std::cout << "Operator de recopie called" << std::endl;
    this->nb = src.getRawBits();
    return (*this);
}

int Fixed::getRawBits(void) const
{
    // std::cout << "getRawBits member function called" << std::endl;
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

bool Fixed::operator<(const Fixed &src) const 
{
    if (this->getRawBits() < src.getRawBits())
        return true;
    else    
        return false;
}

bool Fixed::operator>(const Fixed &src) const 
{
    if (this->getRawBits() > src.getRawBits())
        return (true);
    else
        return (false);
}

bool Fixed::operator>=(const Fixed &src) const
{
    if (this->getRawBits() >= src.getRawBits())
        return (true);
    else
        return (false);
}

bool Fixed::operator<=(const Fixed &src) const 
{
    if (this->getRawBits() <= src.getRawBits())
        return (true);
    else
        return (false);
}

bool Fixed::operator==(const Fixed &src) const
{
    if (this->getRawBits() == src.getRawBits())
        return (true);
    else
        return (false);
}

bool Fixed::operator!=(const Fixed &src) const
{
    if (this->getRawBits() != src.getRawBits())
        return (true);
    else
        return (false);
}

Fixed Fixed::operator+(const Fixed &src) const
{
    return (this->toFloat() + src.toFloat());
}

Fixed Fixed::operator-(const Fixed &src) const
{
    return (this->toFloat() - src.toFloat());
}

Fixed Fixed::operator*(const Fixed &src) const
{
    return (this->toFloat() * src.toFloat());
}

Fixed Fixed::operator/(const Fixed &src) const
{
    return Fixed(this->toFloat() / src.toFloat());
}

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);

    --(*this);
    return tmp;
}

Fixed Fixed::operator--(void)
{
    nb = nb - 1;
    return (*this);
}

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);

    ++(*this);
    return (tmp);
}

Fixed Fixed::operator++(void)
{
    nb = nb + 1;
    return (*this);
}

Fixed & Fixed::min(Fixed & a, Fixed & b)
{
    if (a < b)
        return (a);
    else
        return (b);
}

Fixed & Fixed::max(Fixed & a, Fixed & b)
{
    if (a > b)
        return (a);
    else
        return (b);
}

Fixed const & Fixed::min(Fixed const & a, Fixed const & b)
{
    if (a < b)
        return (a);
    else
        return (b);
}

Fixed const & Fixed::max(Fixed const & a, Fixed const & b)
{
    if (a > b)
        return (a);
    else
        return (b);
}