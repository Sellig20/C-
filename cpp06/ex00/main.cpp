#include <cctype>
#include <string>
#include <iostream>
#include <exception>
#include <cstdlib>
#include <cmath>

void    convChar(double toConv, std::string input, std::string type)
{
    std::cout << "char: ";
    if (input == "nanf" || input == "nan" || input == "-inff" || input == "+inff" || input == "-inf" || input == "+inf")
    {
        std::cout << "impossible" << std::endl;
        return ;
    }    
    if (type == "char")
        std::cout << "'" << input << "'" << std::endl;
    else if (isprint(static_cast<char>(toConv)))
        std::cout << "'" << static_cast<char>(toConv) << "'" << std::endl;
    else
        std::cout << "Non displayable" << std::endl;
}

void    convInt(double toConv, std::string input)
{
    std::cout << "int: ";
    if (input == "nanf" || input == "nan" || input == "-inff" || input == "+inff" || input == "-inf" || input == "+inf")
        std::cout << "impossible" << std::endl;
    else
        std::cout << static_cast<int>(toConv) << std::endl;
}

void    convFloat(double toConv)
{
    std::cout << "float: ";
    std::cout << static_cast<float>(toConv);
    if (!fmod(toConv, static_cast<float>(1)))
        std::cout << ".0f" << std::endl;
    else
        std::cout << "f" << std::endl;
}

void    convDouble(double toConv)
{
    std::cout << "double: " << toConv;
    if (!fmod(toConv, static_cast<float>(1)))
        std::cout << ".0";
    std::cout << std::endl;
}

void    convert(std::string input, std::string type)
{
    double toConv;

    toConv = atof(input.c_str());
    convChar(toConv, input, type);
    convInt(toConv, input);
    convFloat(toConv);
    convDouble(toConv);
}

bool    checkChar(std::string str)
{
    if (str.size() != 1)
        return (false);
    if (!isprint(str[0]))
        return (std::cout << "Non displayable" << std::endl, false);
    if (isdigit(str[0]))
        return (false);
    return (true);
}

bool    checkInt(std::string str)
{
    for (int i = 0; str[i]; i++)
    {
        if (str[i] == '-' && i != 0)
            return (false);
        if (!isdigit(str[i]) && str[i] != '-')
            return (false);
    }
    return (true);
}

bool    checkFloat(std::string str)
{
    int point;
    
    point = 0;
    if (str == "-inff" || str == "+inff" || str == "nanf")
        return (true);
    for (int i = 0; str[i]; i++)
    {
        if (str[i] == '-' && i != 0)
            return (false);
        if (!isdigit(str[i]) && str[i] != '-' && str[i] != '.' && str[i] != 'f')
            return (false);
        if (str[i] == '.')
            point++;
        if (point > 1)
            return (false);
    }
    if (str.find("f", 0) == str.npos)
        return (false);
    return (true);
}

bool    checkDouble(std::string str)
{
    int point;
    
    point = 0;
    if (str == "-inf" || str == "+inf" || str == "nan")
        return (true);
    for (int i = 0; str[i]; i++)
    {
        if (str[i] == '-' && i != 0)
            return (false);
        if (!isdigit(str[i]) && str[i] != '.' && str[i] != '-')
            return (false);
        if (str[i] == '.')
            point++;
        if (point > 1)
            return (false);
    }
    return (true);
}

bool    checkArgv(std::string str, std::string *type)
{
    if (str.empty())
        return (std::cout << "Empty string" << std::endl, false);
    if (checkChar(str))
        return (*type = "char", true);
    if (checkInt(str))
        return (*type = "int", true);
    if (checkFloat(str))
        return (*type = "float", true);
    if (checkDouble(str))
        return (*type = "double", true);
    return (false);
}

int main(int argc, char **argv)
{
    std::string type;

    if (argc != 2)
    {
        std::cout << "Invalid number of arguments" << std::endl;
        return (1);
    }
    if (!checkArgv(std::string(argv[1]), &type))
    {
        std::cout << "Invalid type" << std::endl;
        return (1);
    }
    convert(argv[1], type);
    return (0);
}