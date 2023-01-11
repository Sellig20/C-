
#include <iostream>
#include <cstring>

using namespace std;

int main(int ac, char **av)
{
    int i;
    int len;
    int j;
    string str;

    len = 0;
    if (ac == 1)
        cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << endl;
    for (i = 1; i < ac; i++)
    {
        str = av[i];
        len = str.length();
        for (j = 0; j < len; j++)
            cout << toupper(str[j]) << endl;
    }
    return 0;
}
