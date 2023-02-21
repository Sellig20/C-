#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>

template <typename T>
typename T::iterator easyfind(T container, int nb)
{
    typename T::iterator res;

    res = find(container.begin(), container.end(), nb);
    if (res == container.end())
        throw std::exception();
    return (res);
}

#endif