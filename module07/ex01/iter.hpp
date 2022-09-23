#ifndef ITER_HPP
# define ITER_HPP
#include <iostream>

template<typename T>
void print(T & value)
{
    std::cout << value << std::endl;
}

template<typename T>
void iter(T * tab, int sizeTab, void(*print)(T &))
{
    for (int i = 0; i < sizeTab; i++)
        print(tab[i]);
}

#endif
