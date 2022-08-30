#ifndef WEAPONCLASS_H
# define WEAPONCLASS_H
#include <string>
#include <iomanip> 
#include <sstream>
#include <iostream>

class Weapon
{
    public:
            Weapon(std::string type);
            ~Weapon();
            std::string const & getType(void);
            void  setType(std::string type);
    private:
            std::string _type;
};
#endif