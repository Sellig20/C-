#include "Span.hpp"

Span::Span()
{
    this->size = 0;
}

Span::Span(unsigned int nb)
{
    size = nb;
}
        
Span::Span(const Span &src)
{
    *this = src;
}

Span::~Span()
{

}

Span &Span::operator=(const Span &src)
{
    this->vec = src.getVec();
    this->size = src.size;
    return (*this);
}

void Span::addNumber(int nb)
{
    if (size < 0)
        throw NegativeSize();
    if (vec.size() == size)
        throw NoPlaceToAddNewElement();
    vec.push_back(nb);
}

void Span::addNumber(std::vector<int>::iterator first, std::vector<int>::iterator last)
{
    if (size < 0)
        throw NegativeSize();
    if (vec.size() == size)
        throw NoPlaceToAddNewElement();
    for (std::vector<int>::iterator i = first; i != last; i++)
    {
        vec.push_back(*i);
    }
}

long int Span::shortestSpan() const
{
    std::vector<int> tmp;
    long int res;

    if (size < 0)
        throw NegativeSize();
    res = 2147483647;
    tmp = vec;
    std::sort(tmp.begin(), tmp.end());
    for (std::vector<int>::iterator i = tmp.begin() ; i != tmp.end() - 1; i++)
    {
        if ((*(i + 1) - *i) < res)
            res = (*(i + 1) - *i);
    }
    return (res);
}

long int Span::longestSpan() const
{
    std::vector<int> tmp;
    long int res;

    if (size < 0)
        throw NegativeSize();
    tmp = vec;
    std::sort(tmp.begin(), tmp.end());
    res = (*(tmp.end() - 1)) - (*tmp.begin());
    return (res);
}

std::vector<int> Span::getVec() const
{
    return (vec);
}