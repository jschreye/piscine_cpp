#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    setHitPoints(100);
    setEnergyPoints(100);
    setAttackDamage(30);
    std::cout << "FragTrap constructor create" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
    setName(name);
    setHitPoints(100);
    setEnergyPoints(100);
    setAttackDamage(30);
    std::cout << name << " FragTrap constructor create" << std::endl;
}


FragTrap::FragTrap(FragTrap const & src)
{
    std::cout << "FragTrap cpy constructor create" << std::endl;
    *this = src;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap distroy" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
    std::cout << "High Fives" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
    int tmp = getEnergyPoints() - 1;
    if (getEnergyPoints() <= 0)
    {
        std::cout << getName() << " has no more energy" << std::endl;
        return ;
    }
    if (getHitPoints() <= 0)
    {
        std::cout << getName() << " has no more HitPoints" << std::endl;
        return ;
    }
    std::cout << "FragTrap " <<  getName() << " attacks " << target <<
        ", " "causing " << getAttackDamage() << " points of damage!" << std::endl;
    setEnergyPoints(tmp);
}