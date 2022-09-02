#include "ZombieClass.hpp"

Zombie* zombieHorde(int N, std::string name);

int main (int argc, char **argv)
{
    if (argc != 2)
    {
        std::cout << "Error arguments" << std::endl;
        return (0);
    }
    int N = 10;
    Zombie* zombie;
    zombie = zombieHorde(N, argv[1]);
    delete [] zombie;
    return (0);
}