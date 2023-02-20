#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>


template <typename variable>
void swap(variable &a, variable &b)
{
    variable tmp;
    tmp = a;
    a = b;
    b = tmp;
}

template <typename variable>
variable min(variable a, variable b)
{
    if (a < b)
        return (a);
    else
        return (b);
}

template <typename variable>
variable max(variable a, variable b)
{
    if (a > b)
        return (a);
    else
        return (b);
}

#endif