#ifndef HUMANACLASS_H
# define HUMANACLASS_H
#include "WeaponClass.hpp"
#include <string>
#include <iomanip> 
#include <sstream>
#include <iostream>

class HumanA
{
    public:
                HumanA(std::string name, Weapon &weapon);
                ~HumanA(void);
                void attack(void);
                std::string getName(void);
    private:
                std::string _name;
                Weapon &_weapon;
};
#endif
