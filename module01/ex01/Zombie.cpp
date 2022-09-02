#include "ZombieClass.hpp"

Zombie::Zombie()
{
    std::cout << "Zombie is born" << std::endl;
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

void Zombie::announce(void)
{
    std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
    return ;
}