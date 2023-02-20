#ifndef _ITER_HPP
#define _ITER_HPP

#include <iostream>

template <typename shima>
void    iter(shima *array, int len, void fct(const shima &element))
{
    for (int i = 0; i < len; i++)
       fct(array[i]);
}

template <typename grandma>
void    print(grandma &element)
{
    std::cout << element << std::endl;
}

#endif