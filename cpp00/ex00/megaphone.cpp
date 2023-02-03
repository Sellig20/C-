#include <iostream>
#include <cstring>

using namespace std;

int main(int ac, char **av)
{
    int i;
    int len;
    int j;
    std::string str;

    len = 0;
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    for (i = 1; i < ac; i++)
    {
        str = av[i];
        len = str.length();
        for (j = 0; j < len; j++)
        {
            std::cout << (char)toupper(str[j]);
        }
        if ((i < ac - 1))
            std::cout << " ";
    }
    return 0;
}
