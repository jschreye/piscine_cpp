#ifndef WHATEVER_HPP
# define WHATEVER_HPP
#include <iostream>

template < typename T >
void swap(T & x, T & y)
{
    T j;
    j = x;
    x = y;
    y = j;
}

template < typename T >
const T max(T const & x, T const & y)
{
    if (x == y)
        return y;
    else
        return ((x >= y) ? x : y);
}

template < typename T >
const T min(T const & x, T const & y)
{
    if (x == y)
        return y;
    else
        return ((x <= y) ? x : y);
}

#endif
