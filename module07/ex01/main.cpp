#include "iter.hpp"

int main()
{
    const int size = 3;
    int tab1[size] = {0, 1, 2};
    std::string tab[size];
    tab[0] = "salut";
    tab[1] = "hello";
    tab[2] = "dsaad";
    ::iter(tab, size, print);
    ::iter(tab1, size, print);
    return (0);
}