#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>

class NotFoundException : public std::exception
{
    public :
        virtual const char *what() const throw()
        {
            return ("No occurrence founded" );
        }
};

template <typename T>
typename T::iterator easyfind(T container, int nb)
{
    typename T::iterator res;

    res = find(container.begin(), container.end(), nb);
    
    if (res == container.end())
        throw NotFoundException();
    return (res);
}

#endif
