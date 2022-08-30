#ifndef HUMANBCLASS_H
# define HUMANBCLASS_H
#include "WeaponClass.hpp"
#include <string>
#include <iomanip> 
#include <sstream>
#include <iostream>

class HumanB
{
    public:
                HumanB(std::string name);
                ~HumanB();
                std::string getName();
                void attack(void);
                void setWeapon(Weapon & type_weapon);
    private:
                std::string _name;
                Weapon *_weapon;
};
#endif