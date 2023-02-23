#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <stdexcept>

template<typename T>
class Array
{
    public :
        Array()
        {
            array = NULL;
            len = 0;
        }
        Array(unsigned int n)
        {
            array = new T[n];

            for (unsigned int i = 0; i < n; i++)
                array[i] = 0;
            len = n;
        }
        Array(const Array &src)
        {
            if (this != &src)
            {
                array = new T[src.getLen()];
                for (int i = 0; i < src.getLen(); i++)
                    array[i] = src.getInfos()[i];
                len = src.getLen();
            }
        }
        ~Array()
        {
            if (len > 0)
                delete[] array;
        }

        Array & operator=(const Array &src)
        {
            array = new T[src.getLen()];

            len = src.getLen();
            for (int i = 0; i < len; i++)
                array[i] = src.getInfos()[i];
            return (*this);
        }

        T & operator[](int n) const
        {
            if (n >= len || n < 0)
                throw IndexOutOfBounds();
            return (array[n]);
        }

        int size() const
        {
            return (len);
        }

        T *getInfos() const
        {
            return (array);
        }

        int getLen() const
        {
            return (len);
        }
        class IndexOutOfBounds : public std::exception
        {
            public :
                virtual const char *what() const throw() // virtual pour beneficier les enfants de cette classe
                {
                   return ("Index out of bounds");
                }
        };

    private :
        T   *array;
        int len;
};

template <typename T>
std::ostream &operator<<(std::ostream &o, const Array<T> &src)
{
    for (int i = 0; i < src.getLen(); i++)
    {
        o << src.getInfos()[i] << std::endl;
    }
    return (o);
}

#endif
