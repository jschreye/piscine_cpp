#include "ZombieClass.hpp"

Zombie* zombieHorde(int N, std::string name);

int main (int argc, char **argv)
{
    if (argc <= 1)
    {
        std::cout << "Error argument" << std::endl;
        return (0);
    }
    if (argc > 2)
    {
        std::cout << "Error to many arguments" << std::endl;
        return (0);
    }
    int N = 10;
    Zombie* zombie;
    zombie = zombieHorde(N, argv[1]);
    delete [] zombie;
    return (0);
}