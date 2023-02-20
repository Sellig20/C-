#include "iter.hpp"

int main()
{
    int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::string strings[3] = {"Shima", "Juana", "Shimajuana"};
    iter(array, 10, print); 
    iter(strings, 3, print);
    return (0);
}