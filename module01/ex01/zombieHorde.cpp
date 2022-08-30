#include "ZombieClass.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie* zombie = new Zombie[N];
    for(int i = 0; i < N; i++)
    {
        zombie[i].registrename(name);
        std::cout << "BraiiiiiiinnnzzzZ..." << std::endl;
    }
    return (zombie);
}