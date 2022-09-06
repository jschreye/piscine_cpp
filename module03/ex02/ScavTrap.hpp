#ifndef SCAVTRAP_H
# define SCAVTRAP_H
#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
        public:
                ScavTrap();
                ScavTrap(ScavTrap const & src);
                ScavTrap(std::string name);
                ~ScavTrap();
                void attack(const std::string& target);
                void guardGate();
        private:
};

#endif
