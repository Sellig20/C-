#include "iter.hpp"

int main()
{
    int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    std::string strings[3] = {"Shima", "Juana", "Shimajuana"};
    iter(array, 10, print);
    iter(strings, 3, print);
    return (0);
}

// class Awesome
// {
//     public :
//         Awesome() : _n(42) {return;}
//         int get() const {return this->_n;}
//     private :
//         int _n;
// };

// std::ostream &operator<<(std::ostream & o, Awesome const &rhs) { o << rhs.get(); return o;}
// template<typename T>
// void print(T const & x) {std::cout << x << std::endl; return ;}

// int main()
// {
//     int tb[]= {0, 1, 2, 3, 4};
//     Awesome tab2[5];

//     iter(tb, 5, print);
//     iter(tab2, 5, print);

//     return (0);
// }
