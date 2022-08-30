#include "HarlClass.hpp"

int main(int argc, char **argv)
{
    Harl harl;
    if (argc <= 1)
        return (0);
    harl.complain(argv[1]);
    return (0);
}