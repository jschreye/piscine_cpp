#ifndef CLAPTRAP_H
# define CLAPTRAP_H
#include <iostream>

class ClapTrap
{
    public:
            ClapTrap();
            ClapTrap(std::string name);
            ~ClapTrap();
            void attack(const std::string& target);
            void takeDamage(unsigned int amount);
            void beRepaired(unsigned int amount);
    private:
            std::string _name;
            int _HitPoints = 10;
            int _EnergyPoints = 10;
            int _AttackDammage = 0;
};

#endif