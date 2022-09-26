#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <algorithm>

template <typename T>
typename T::iterator	easyfind(T& nbr, int value)
{
    typename T::iterator iter;

    iter = std::find(nbr.begin(), nbr.end(), value);
    return (iter);
}

#endif