#ifndef CLAPTRAP_H
# define CLAPTRAP_H
#include <iostream>
#include <string>

class ClapTrap
{
        public:
            ClapTrap();
            ClapTrap(ClapTrap const & src);
            ClapTrap(std::string name);
            virtual ~ClapTrap();
            void attack(const std::string& target);
            void takeDamage(unsigned int amount); 
            void beRepaired(unsigned int amount);
            std::string getName() const;
            int getHitPoints() const;
            int getEnergyPoints() const;
            int getAttackDamage() const;
            void setName(std::string const name);
            void setHitPoints(int const hit);
            void setEnergyPoints(int const energy);
            void setAttackDamage(int const attack);
            ClapTrap &operator=(ClapTrap const & rhs);
        private:
            std::string _name;
            int _HitPoints;
            int _EnergyPoints;
            int _AttackDammage;
};
#endif