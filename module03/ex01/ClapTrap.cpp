#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    this->_HitPoints = 10;
    this->_EnergyPoints = 10;
    this->_AttackDammage = 0;
    std::cout << "ClapTrap constructor create" << std::endl;
}


ClapTrap::ClapTrap(std::string name): _name(name)
{
    this->_name = name;
    this->_HitPoints = 10;
    this->_EnergyPoints = 10;
    this->_AttackDammage = 0;
    std::cout << this->_name << " constructor create" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & src)
{
    std::cout << "cpy constructor create" << std::endl;
    *this = src;
}

ClapTrap::~ClapTrap()
{
    std::cout << "claptrap distroy" << std::endl;
}

std::string ClapTrap::getName() const
{
    return (this->_name);
}
int ClapTrap::getHitPoints() const
{
    return(this->_HitPoints);
}
int ClapTrap::getEnergyPoints() const
{
    return (this->_EnergyPoints);
}
int ClapTrap::getAttackDamage() const
{
    return (this->_AttackDammage);
}
void ClapTrap::setName(std::string const name)
{
    this->_name = name;
}
void ClapTrap::setHitPoints(int const hit)
{
    this->_HitPoints = hit;
}
void ClapTrap::setEnergyPoints(int const energy)
{
    this->_EnergyPoints = energy;
}
void ClapTrap::setAttackDamage(int const attack)
{
    this->_AttackDammage = attack;
}

ClapTrap &ClapTrap::operator=(ClapTrap const & rhs)
{
    if (this != &rhs)
    {
        this->_name = rhs.getName();
        this->_HitPoints = rhs.getHitPoints();
        this->_EnergyPoints = rhs.getEnergyPoints();
        this->_AttackDammage = rhs.getAttackDamage();
    }
    return (*this);
}

void ClapTrap::attack(const std::string& target)
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
    std::cout << "ClapTrap " <<  this->_name << " attacks " << target <<
        ", " "causing " << getAttackDamage() << " points of damage!" << std::endl;
    setEnergyPoints(tmp);
}

void ClapTrap::takeDamage(unsigned int amount)
{
    int tmp = getHitPoints() - amount;
    if (getHitPoints() <= 0)
    {
        std::cout << getName() << " is dead" << std::endl;
        return ;
    }
    setHitPoints(tmp);
}

void ClapTrap::beRepaired(unsigned int amount)
{
    int tmp = getEnergyPoints() - 1;
    int tmp2 = getHitPoints() + amount;
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
    setHitPoints(tmp2);
    setEnergyPoints(tmp);
}