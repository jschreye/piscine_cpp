#include "ZombieClass.hpp"

Zombie::Zombie()
{
    std::cout << "is born" << std::endl;
    return ;
}

Zombie::~Zombie(void)
{
    std::cout << this->_name << "is kill" << std::endl;
    return ;
}

void Zombie::announce(void)
{
    std::cout << this->_name << "BraiiiiiiinnnzzzZ..." << std::endl;
    return ;
}