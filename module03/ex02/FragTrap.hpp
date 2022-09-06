#ifndef FRAGTRAP_H
# define FRAGTRAP_H
#include <iostream>
#include <string>
#include "ScavTrap.hpp"

class FragTrap : public ClapTrap
{
        public:
                FragTrap();
                FragTrap(FragTrap const & src);
                FragTrap(std::string name);
                ~FragTrap();
                void attack(const std::string& target);
               void highFivesGuys(void);
        private:
};

#endif