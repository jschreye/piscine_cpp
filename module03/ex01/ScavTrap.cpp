#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    setHitPoints(100);
    setEnergyPoints(50);
    setAttackDamage(20);
    std::cout << "ScavTrap constructor create" << std::endl;
}

ScavTrap::ScavTrap(std::string name) //: ClapTrap(name)
{
    setName(name);
    setHitPoints(100);
    setEnergyPoints(50);
    setAttackDamage(20);
    std::cout << name << " ScavTrap constructor create" << std::endl;
}


ScavTrap::ScavTrap(ScavTrap const & src)
{
    std::cout << "ScavTrap cpy constructor create" << std::endl;
    *this = src;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap distroy" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "mode Gate keeper activate" << std::endl;
}

void ScavTrap::attack(const std::string& target)
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
    std::cout << "ScavTrap " <<  getName() << " attacks " << target <<
        ", " "causing " << getAttackDamage() << " points of damage!" << std::endl;
    setEnergyPoints(tmp);
}