#include "ZombieClass.hpp"

Zombie* newZombie(std::string name)
{
    std::cout << name;
    Zombie* newZombie = new Zombie();
    newZombie->registrename(name);
    newZombie->announce();
    return (newZombie);
}