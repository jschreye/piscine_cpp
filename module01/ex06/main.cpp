#include "HarlClass.hpp"
#include <cstdlib>

int main(int ac, char **av)
{
    Harl harl;

    if (ac != 2)
    {
        std::cout << "Error number of arguments" << std::endl;
        return (1);
    }
    harl.complain(av[1]);
    return (0);
}