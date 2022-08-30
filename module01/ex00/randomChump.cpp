#include "ZombieClass.hpp"

void Zombie::registrename(std::string name)
{
    this->_name = name;
}

void randomChump(std::string name)
{
    std::cout << name;
    Zombie zombie;
    zombie.registrename(name);
    zombie.announce();
}