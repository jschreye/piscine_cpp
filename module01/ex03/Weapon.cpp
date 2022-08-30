#include "WeaponClass.hpp"
 
Weapon::Weapon(std::string type): _type(type)
{
    std::cout << this->getType() << " is create " << std::endl;
    return ;
}

Weapon::~Weapon(void)
{
    std::cout << this->getType() << " distroy" << std::endl;
    return ;
}

std::string const & Weapon::getType(void)
{
    return (this->_type);
}

void Weapon::setType(std::string new_type)
{
    this->_type = new_type;
}
