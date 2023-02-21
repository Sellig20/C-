#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <algorithm>
#include <iostream>

class Span
{
    public :
        Span();
        Span(unsigned int nb);
        Span(const Span &src);
        ~Span();
        Span &operator=(const Span &src);

        void addNumber(int nb);
        void addNumber(std::vector<int>::iterator first, std::vector<int>::iterator last);

        long int shortestSpan() const;
        long int longestSpan() const;

        std::vector<int> getVec() const;

        class NoPlaceToAddNewElement : public std::exception
        {
            public :
                virtual const char *what() const throw()
                {
                    return ("Impossible to add another element" );
                }
        };
        class NegativeSize : public std::exception
        {
            public :
                virtual const char *what() const throw()
                {
                    return ("Error : negative size" );
                }
        };

    private :
        std::vector<int> vec;
        unsigned long size;
};



#endif