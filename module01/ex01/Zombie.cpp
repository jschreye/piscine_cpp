#include "ZombieClass.hpp"

Zombie::Zombie()
{
    std::cout << "zombie is born" << std::endl;
    return ;
}

Zombie::~Zombie(void)
{
    std::cout << this->_name << " is kill" << std::endl;
    return ;
}

void Zombie::registrename(std::string name)
{
    this->_name = name;
}